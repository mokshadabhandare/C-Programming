#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int no1;
        int no2;

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
};
int main()
{
    int ret=0;
    Arithematic obj(21,11);

    ret =obj.Addition();
    cout<<"Addition is :" <<ret<<"\n";

    return 0;
}