#include<iostream>
using namespace std;

class Demo
{
    public:
     int X,Y;
    Demo()
    {
         X=10;
         Y=20;
    }
    void fun()
    {
       cout<<"Inside fun\n";
       X++;
       Y++;
    }
    void gun() const{
        cout<<"Inside gun\n";
    }
};

int main()
{
   
    
    return 0;
}