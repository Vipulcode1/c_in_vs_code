#include<iostream>
using namespace std;
class X{
public:
 int plusFunctionInt(int x,int y)
 { return x+y;}
 double plusFunctiondouble(double x,double y)
 {return x+y;}
};
int main()
{
X x1,x2;
int mynum1= x1.plusFunctionInt(8,5);
double mynum2=x2.plusFunctiondouble(4.3,6.26);
cout<<"Int:"<<mynum1<<"\n";
cout<<"double"<<mynum2<<"\n";
return 0;
}