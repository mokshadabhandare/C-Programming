#include<iostream>
using namespace std;
class Marvellous  
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
class Demo :public Marvellous
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
class Hello : public Marvellous
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

 int main()
 {
    Demo dobj;
    Hello hobj;

    return 0;
 }