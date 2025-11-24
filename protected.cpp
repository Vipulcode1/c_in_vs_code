#include<iostream>
using namespace std;
class X{
    protected:
    int salary;
};
    class Y : class X{
    public:
    int bonus;

    void setsalary(int x){
        salary = x + 500;
    }
    int getsalarty(){
        return salary;
    }
 
};
int main(){
    X x1,x2;
    x1.setsalary(80000);
    x2.setsalary(50000);
    cout<<"int:"<<x1.getsalarty()<<"\n";
    cout<<"double:"<<x2.getsalarty();
    return 0;
    
    
}