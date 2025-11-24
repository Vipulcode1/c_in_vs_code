#include<iostream>
using namespace std;
template <typename T1 , typename T2>
class Pair {
 public:
 T1 first;
 T2 second;

  Pair(T1 a,T2 b){
    first= a;
    second= b;

  }
  void display(){
    cout<<"First:"<< first<<"\n"<<"second:"<<second<<"\n";
  }
};
int main()
{
    Pair<string , int> person("Vipul", 40);
    Pair<int , double> score(50 , 54.7);

    person.display();
    score.display();
    return 0;
}