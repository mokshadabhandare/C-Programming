#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

        Arithematic()
        {
            no1=0;
            no2=0;
        }
        Arithematic(int A,int B)
        {
            no1=A;
            no2=B;
        }
        int Addition()
        {
            int ans=0;
            ans=no1+no2;
            return ans;
        }
        int Substraction()
        {
            int ans=0;
            ans=no1-no2;
            return ans;
        }
};
int main()
{
    int value1=0,value2=0,ret=0;

    cout<<"Enter first number:\n";
    cin>>value1;

    cout<<"Enter second number:\n";
    cin>>value2;

    Arithematic obj(value1,value2);

    ret =obj.Addition();
    cout<<"Addition is :"<<ret<<"\n";

    ret=obj.Substraction();
    cout<<"Substration is :"<<ret<<"\n";

    return 0;
}