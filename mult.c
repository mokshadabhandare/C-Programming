#include<stdio.h>
int main()
{
    int no1=0;
    int no2=0;
    double ans=0;

    printf("Enter first number:\n");
    scanf("%d",&no1);

    printf("Enter second number:\n");
    scanf("%d",&no2);

    ans = no1*no2;
    printf("The multiplication of two numbers is :%f",ans);
    return 0;
}