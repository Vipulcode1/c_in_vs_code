#include<iostream>
using namespace std;
int main()
{
    int password,i=2345;
    cout<<"enter the door code:";
    cin>>password;

    string result = (i==password) ? "you entered right password" : "wrong password";
    cout<<result;
    return 0;
}