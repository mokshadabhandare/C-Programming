#include<stdio.h>
int main()
{
    int Standard=0;

    printf("Enter your standard:\n");
    scanf("%d",&Standard);

    if(Standard==1)
    {
        printf("Your exam is at 7am\n");
    }
    else if(Standard==2)
    {
        printf("Your exam is at 8am\n");
    }
    else if(Standard==3)
    {
        printf("Your exam is at 9am\n");
    }
    else if(Standard==4)
    {
        printf("Your exam is at 10am\n");
    }
    else
    {
        printf("Wrong Standard\n");
    }
    return 0;

}