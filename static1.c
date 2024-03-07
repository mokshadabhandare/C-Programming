#include<stdio.h>

void Marvellous()
{
    static int i=10;
    i++;
    printf("Value of x is :%d\n",i);
}
int main()
{
    printf("Demonstration of auto storage class..\n");
    
     Marvellous();
        Marvellous();
            Marvellous();

    return 0;
}