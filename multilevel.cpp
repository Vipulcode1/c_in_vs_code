#include<iostream>
using namespace std;
class myclass{
    public:
void myfunction(){
    cout<<"some content in my parent class\n";
}
};
class myotherclass{
    public:
    void myotherfunction(){
        cout<<"some content in my parent class\n";
    }
};
class mychildclass: public myclass,public myotherclass{
    public:
    void childfunction(){
        cout<<"this is child function\n";
    }

};
int main()

{
    mychildclass myobj;
    myobj.myfunction();
    myobj.myotherfunction();
    myobj.childfunction();
    return 0;
    
}