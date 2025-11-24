#include<iostream>
using namespace std;
int main(){
    int a,b,c,mul,add,sub;
    float div;
    char character;
    cout<<"enter two nums:";
    cin>>a>>b;
    cout<<"choose operator(+ - * /)\n";
    cin>>character;
    add=a+b;
    div=a/b;
    sub=a-b;
    mul=a*b;
    switch(character)
    {
        case '+' : cout<<add;
         break;
        case '-': cout<<sub; 
        break;
        case '*': cout<<mul; 
        break;
        case '/' : cout<<div;
         break;
        default: cout<<"invalid operator";


    }
    return 0;
}