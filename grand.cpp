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
 class child: public grand
 {

 };
class grandchild: public child
{

};
int main()
{
 grandchild obj;
 obj.function();
 return 0;  
}

