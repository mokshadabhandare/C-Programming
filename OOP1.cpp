#include<iostream>
using namespace std;

//class Declaration
class Demo
{
    public: //Access Specifier
    int no1; //Characteristics
    int no2; //Characteristics

    Demo() //Constructor
    {
        cout<<"Inside Constructor\n";
    }
    Demo() //Destructor
    {
        cout<<"Inside Destructor\n";
    }
    void Fun()  //Behaviour
    {
        cout<<"Inside Fun of Demo Class\n";
    }

};

int main()
{

    return 0;
}