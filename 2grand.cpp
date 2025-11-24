#include<iostream>
using namespace std;
class grand
{
 public:
 void function()
 {
    cout<<"some content in parent class.";

 }
};
 class child:
 {

 };
class grandchild: public child : public grand
{

};
int main()
{
    grandchild obj;
    obj.function();
    return 0;
}

