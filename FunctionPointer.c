#include<stdio.h>

int Multiplication(int no1,int no2)
{
    int ans=0;
    ans=no1*no2;
    return ans;
}

int main()
{
    int value1=0,value2=0,Ans=0;

    int (*fptr)(int,int);

    fptr=Multiplication;
    
    printf("Enter first number:\n");
    scanf("%d",&value1);

    printf("Enter second number:\n");
    scanf("%d",&value2);

    Ans=fptr(value1,value2);

    printf("Multiplication is :%d\n",Ans);
    return 0;
}