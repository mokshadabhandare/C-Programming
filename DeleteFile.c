#include<stdio.h>
#include<Stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd=0;

    printf("Enter name of file that you want to deltee:\n");
    scanf("%s",Name);

    unlink(Name);
    
      return 0;
}