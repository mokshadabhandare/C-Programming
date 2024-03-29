#include<iostream>
using namespace std;

class Base 
{
    public :
      int A,B;
      void Fun() //1000
      {
        cout<<"Base Fun\n";
      }
      void Gun() //2000
      {
        cout<<"Inside Gun\n";
      }
      void Sun() //3000
      {
        cout<<"Inside Sun\n";
      }
};
class Derived :public Base
{
    public :
       int X,Y;
       void Gun()
       {
        cout<<"Derived Gun\n";
       }
       void Sun()
       {
        cout<<"Derived Sun\n";
       }
       void Run()
       {
        cout<<"Derived Run\n";
       }
};
int main()
{

    return 0;
}
