#include<iostream>
using namespace std;

class Demo
{
   public : 
       int A;
       Demo()
       {
        A=10;
        cout<<"inside Demo Constructor\n";
       }
       ~ Demo()
       {
        cout<<"inside Demo Destructor\n";
       }
    void Fun()
    {
        cout<<"INside fun of Demo\n";
    }
};
class Hello
{
    public:
        int B;
         Hello()
       {
        B=10;
        cout<<"inside Hello Constructor\n";
       }
    ~Hello()
       {
        cout<<"inside Hello Destructor\n";
       }
    void Gun()
    {
        cout<<"Inside Gun of Hello\n";
    }
};
class Marvellous : public Hello, public Demo
{
    public :
        int C;
        Marvellous()
        {
            C=30;
            cout<<"Inside Marvellous constructor\n";
        }
         ~Marvellous()
        {
            cout<<"Inside Marvellous destructor\n";
        }
        void Sun()
        {
            cout<<"Inside Sun of Marvellous\n";
        }
};
 int main()
 {
    Marvellous mobj;

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();

    cout<<mobj.A<<"\n";
    cout<<mobj.B<<"\n";
    cout<<mobj.C<<"\n";

    return 0;
 }