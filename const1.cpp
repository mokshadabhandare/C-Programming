#include<iostream>
using namespace std;
const int A=10;
int B=20;

class Demo
{
    public:
    int X,Y;
    Demo()
    {
        X=10;
        Y=20;
    }
    void fun(int i,const int j)
    {
        int No1=11;
        const int No2=21;
    }
};
int main()
{
    Demo obj1;
    const Demo obj2;
    return 0;
}