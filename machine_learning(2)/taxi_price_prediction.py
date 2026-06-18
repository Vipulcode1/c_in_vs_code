import streamlit as st
import pandas as pd
import time

from sklearn.model_selection import train_test_split
from sklearn.compose import ColumnTransformer
from sklearn.pipeline import Pipeline
from sklearn.preprocessing import OneHotEncoder
from sklearn.impute import SimpleImputer
from sklearn.ensemble import RandomForestRegressor

st.set_page_config(
    page_title="AI Taxi Fare Predictor",
    page_icon="🚖",
    layout="wide"
)

st.markdown("""
<style>
.main{
    background-color:#0E1117;
}
.title{
    text-align:center;
    font-size:50px;
    color:white;
}
.sub{
    text-align:center;
    color:gray;
    margin-bottom:20px;
}
.result-box{
    padding:30px;
    border-radius:20px;
    background:#1E1E1E;
    text-align:center;
}
</style>
""", unsafe_allow_html=True)

@st.cache_resource
def train_model():

    df = pd.read_csv("taxi_trips.csv")

    df["pickup_datetime"] = pd.to_datetime(df["pickup_datetime"])

    df["hour"] = df["pickup_datetime"].dt.hour
    df["day"] = df["pickup_datetime"].dt.day
    df["month"] = df["pickup_datetime"].dt.month

    X = df[
        [
            "pickup_zone",
            "vehicle_type",
            "passenger_count",
            "trip_distance_km",
            "trip_duration_min",
            "payment_method",
            "hour",
            "day",
            "month"
        ]
    ]

    y = df["fare_amount"]

    cat_cols = [
        "pickup_zone",
        "vehicle_type",
        "payment_method"
    ]

    num_cols = [
        "passenger_count",
        "trip_distance_km",
        "trip_duration_min",
        "hour",
        "day",
        "month"
    ]

    preprocessor = ColumnTransformer([
        (
            "num",
            SimpleImputer(strategy="median"),
            num_cols
        ),
        (
            "cat",
            Pipeline([
                ("imp", SimpleImputer(strategy="most_frequent")),
                ("ohe", OneHotEncoder(handle_unknown="ignore"))
            ]),
            cat_cols
        )
    ])

    model = Pipeline([
        ("preprocessor", preprocessor),
        ("rf", RandomForestRegressor(
            n_estimators=300,
            random_state=42
        ))
    ])

    X_train, X_test, y_train, y_test = train_test_split(
        X,
        y,
        test_size=0.2,
        random_state=42
    )

    model.fit(X_train, y_train)

    return model, df


model, df = train_model()


st.markdown(
    "<div class='title'>🚖 AI Taxi Fare Predictor</div>",
    unsafe_allow_html=True
)

st.markdown(
    "<div class='sub'>Smart Fare Prediction Using Machine Learning</div>",
    unsafe_allow_html=True
)

c1, c2 = st.columns(2)

with c1:

    pickup_zone = st.selectbox(
        "Pickup Zone",
        sorted(df["pickup_zone"].unique())
    )

    vehicle_type = st.selectbox(
        "Vehicle Type",
        sorted(df["vehicle_type"].unique())
    )

    passenger_count = st.slider(
        "Passengers",
        1,
        10,
        2
    )

with c2:

    payment_method = st.selectbox(
        "Payment Method",
        sorted(df["payment_method"].unique())
    )

    trip_distance_km = st.number_input(
        "Distance (KM)",
        0.1,
        500.0,
        5.0
    )

    trip_duration_min = st.number_input(
        "Duration (Minutes)",
        1.0,
        1000.0,
        20.0
    )

ride_date = st.date_input("Ride Date")
ride_hour = st.slider("Ride Hour", 0, 23, 12)

if st.button("🔮 Predict Fare", use_container_width=True):

    progress = st.progress(0)

    for i in range(100):
        time.sleep(0.01)
        progress.progress(i + 1)

    sample = pd.DataFrame({

        "pickup_zone":[pickup_zone],
        "vehicle_type":[vehicle_type],
        "passenger_count":[passenger_count],
        "trip_distance_km":[trip_distance_km],
        "trip_duration_min":[trip_duration_min],
        "payment_method":[payment_method],
        "hour":[ride_hour],
        "day":[ride_date.day],
        "month":[ride_date.month]

    })

    fare = model.predict(sample)[0]

    st.balloons()

    st.markdown(f"""
    <div class='result-box'>
        <h2>Estimated Fare</h2>
        <h1>₹ {fare:.2f}</h1>
    </div>
    """, unsafe_allow_html=True)

    if fare < 200:
        st.success("Budget Ride 🚕")

    elif fare < 500:
        st.info("Standard Ride 🚖")

    else:
        st.warning("Premium Ride 🚘")