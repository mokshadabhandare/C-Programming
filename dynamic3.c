#include<stdio.h>
#include<stdlib.h> //for malloc , calloc ,realloc ,free

int main()
{

    int *ptr=NULL;

    ptr= (int *)malloc(5 * sizeof(int));
     
     //use the memory

    free(ptr);
    
    return 0;
}