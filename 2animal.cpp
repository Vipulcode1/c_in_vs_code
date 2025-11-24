#include<iostream>
using namespace std;
class animal
{
public:
      void virtual sound()
      {
        cout<< "Animal sound\n";
      }
};
class dog:public animal
  {
    public:
    void sound()
    {
        cout<<"dog barks\n";

    }
    
  };
  int main()
  {
    animal* a;
    dog d;
    a= &d;
    a->sound();
    return 0;
  }
