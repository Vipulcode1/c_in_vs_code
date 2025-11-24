#include<iostream>
using namespace std;
class collage
{
    public:
    void mycollage()
    {
        cout<<"data science";
        cout<<"2nd sem";
    }
};
class admin : public collage{
   public:
   void myadmin()
   {
    cout<<"60000 fees";
   }

};
class student : public collage, public admin{

};
int main()
{
    student myobj;
    myobj.mycollage();
    myobj.myadmin();
    return 0;

}