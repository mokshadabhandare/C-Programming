#include<stdio.h>
int main()
{
    int no1=0;
    int no2=0;
    int no3=0;
    float ans=0;

    printf("Enter first number\n");
    scanf("%d",&no1);

    printf("Enter second number\n");
    scanf("%d",&no2);

    printf("Enter third number\n");
    scanf("%d",&no3);

    ans=(no1+no2+no3)/3.0;
    printf("The average of three number is:%f\n",ans);

    return 0;
}