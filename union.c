#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int no;
    float f;
    int data;
    char ch;
};

union  Hello
{
    int no;
    float f;
    int data;
    char ch;
};

int main()
{
    struct Demo dobj;

    union Hello hobj;

    printf("Size of union is: %d\n",sizeof(hobj));
    printf("Size of structure is :%d\n",sizeof(dobj));

    return 0;
}