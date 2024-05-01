#include<stdio.h>
#include<Stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd=0;

    printf("Enter name of file that you want to create:\n");
    scanf("%s",Name);

    fd=open(Name,O_RDWR);   
    if(fd==-1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets created with FD %d\n",fd);
    }
    close(fd);
    return 0;
}