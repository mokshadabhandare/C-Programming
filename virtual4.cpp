#include<iostream>
using namespace std;

class Base 
{
    public:
      int A,B;
      void Fun() //1000
      {
        cout<<"Base Fun\n";
      }
      virtual void Gun() //2000
      {
        cout<<"Base Gun\n";
      }
      void Sun() //3000
      {
        cout<<"Base Sun\n";
      }
      virtual void Mun()
      {
        cout<<"Base Mun\n";
      }
};
class Derived :public Base
{
    public :
       int X,Y;
       virtual void Gun() //4000
       {
        cout<<"Derived Gun\n";
       }
       virtual void Sun()  //5000
       {
        cout<<"Derived Sun\n";
       }
       virtual void Run()  //6000
       {
        cout<<"Derived Run\n";
       }
};
int main()
{
    Derived dobj;
    Base *bp=&dobj;

    //cout<<"Size of base class object is :"<<sizeof(Base)<<"\n";
    //cout<<"Size of derived class object is :"<<sizeof(Derived)<<"\n";

    bp->Fun(); //base fun
    bp->Gun(); //derived gun
    bp->Sun(); //base sun
    bp->Mun(); //base mun
   // bp->Run(); error

    return 0;
}
