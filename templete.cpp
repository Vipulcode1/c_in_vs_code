#include<iostream>
using namespace std;
template <typename T>
class Box
{
 public:
 T value;
 Box(T v){
    value = v;

 }
 void show(){
    cout<<"value:"<< value<<"\n";

 }
};
int main(){
    Box<int> intBox(5099);
    Box<float> floatBox(100.54);
    Box<string> strBox("Hello");

    intBox.show();
    floatBox.show();
    strBox.show();
    return 0;
}