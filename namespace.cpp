#include<iostream>


namespace Marvellous
{
    class Demo
    {

    };
}
namespace PPA
{
    class Hello
    {

    };
}

using namespace Marvellous;
int main()
{
    std::cout<<"Inside main\n";
   Demo dobj;
   PPA::Hello hobj;
    return 0;
}