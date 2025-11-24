#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the door code:";
    cin>>num;

    string result = (num%2==0) ? "num is even" : "num is odd\n";
    cout<<result;
    string rj = (num%2==1) ? "num is odd" : "num is even\n";
    cout<<rj;
    return 0;
}