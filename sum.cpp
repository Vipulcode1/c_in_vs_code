#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three nums:";
    cin>>a>>b>>c;
    if(a<b){
        if(b>c){
            cout<<"b is greater";
        }
        else{
            cout<<"c is greater";
        }
    }else{
        if(a>c){
            cout<<"a is greater";
        }else{
            cout<<"c is greater";
        }
    }
    
    return 0;
}