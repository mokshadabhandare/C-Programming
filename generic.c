#include<stdio.h>

int main()
{
    char ch='A';
    int i=11;
    float f=90.99;
    double d=90.56789;

    char *cp=&ch;
    int *ip=&i;
    float *fp=&f;
    double *dp=&d;

    printf("%c\n",*cp);
    printf("%f\n",*ip);
    printf("%f\n",*fp);
    printf("%f\n",*dp);
    
    return 0;
}