#include<iostream>
using namespace std;
class Car {
public:
 string brand;
 string model;
 Car(){
    brand = "Unknown";
    model = "unknown";

 }
 Car(string b,string m){
    brand = b;
    model = m;

 }

};
int main(){
    Car car1;
    Car car2("BMW","X5");
    Car car3("ford","mostang");
    cout<<"Car1:"<<car1.brand<<car1.model<<"\n";
    cout<<"Car3:"<<car3.brand<<car3.model<<"\n";
    cout<<"Car2:"<<car2.brand<<car2.model<<"\n";
    return 0;

}


