#include<iostream>
using namespace std;
class X
{
 public:
 int plusFunction(int x,int y)
 { return x+y;}
 int plusFunction(int x,int y,int z)
 {return x+y+z;}
};

int main()
{
    X obj;
    int result1 = obj.plusFunction(3,8);
    int result2 = obj.plusFunction(1,2,3);
    cout<<"sum of 2 nums:"<<result1<<"\n";
    cout<<"sum of 3 nums:"<<result2<<"\n";
    return 0;
}