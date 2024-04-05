#include<iostream>
using namespace std;

class Demo
{
     public:
     int A,B;
     Demo()
     {
        cout<<"Inside Constructor\n";
        A=11;
        B=21;
     }
     ~Demo()
     {
        cout<<"Inside Destructor\n";
     }
     void fun()
     {
        cout<<"Inside fun\n";
     }
};

int main()
{
    Demo obj1;
    return 0;
}