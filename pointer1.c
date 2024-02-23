#include<stdio.h>
int main()
{
    int No=11;

    int *ptr=&No;

    double Data=90.999;
    double * dptr=&Data;

    printf("%d\n",No);          //  11
    printf("%f\n",Data);        // 90.99

    printf("%d\n",sizeof(No));    //4
    printf("%d\n",sizeof(ptr));  //8
    printf("%d\n",sizeof(Data)); //8
    printf("%d\n",sizeof(dptr)); //8

    printf("%d\n",*ptr);  //11
    printf("%f\n",*dptr);  //90.999

    return 0;
}