#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];
    int Size=0;
    int *ptr=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&Size);

    ptr=malloc(Size * sizeof(int));

    return 0;
}