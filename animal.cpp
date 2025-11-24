#include<iostream>
using namespace std;
class animal{
 public:
   void animalsound()
   {
    cout<<"animal makes different sound\n";
   }
};
class pig : public animal{
    public:
    void animalsound(){
        cout<<"pig says: wee wee \n";
    }
};
class dog : public animal{
    public:
    void animalsound(){
        cout<<"dog says:bark bark\n";

    }
};
class cat : public animal{
    public:
    void animalsound(){
        cout<<"cat says:mew mew\n";

    }
};
class horse: public animal{
    public:
    void animalsound(){
        cout<<"horse says:hee hee\n";

    }
};
int main(){
    animal myanimal;
    pig mypig;
    dog  mydog;
    cat mycat;
    horse myhorse;
    myanimal.animalsound();
    mypig.animalsound();
    mydog.animalsound();
    mycat.animalsound();
    myhorse.animalsound();
    return 0;

}