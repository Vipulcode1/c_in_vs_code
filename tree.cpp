#include<iostream>
using namespace std;
class vehicle{
    public:
    string brand ="Ford";
    void honk()
    {
        cout<<"Tuut,tuut!\n";
    }
};
class car: public vehicle
{
   public:
   string model = "mustang";
};
int main()
{
    car mycar;
    mycar.honk();
    cout<<mycar.brand+ " " + mycar.model;
    return 0;
}