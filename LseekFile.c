#include<stdio.h>
#include<Stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd=0;
    int iRet=0;
    char Data[30]={'\0'};

    printf("Enter name of file that you want to create:\n");
    scanf("%s",Name);

    fd=open(Name,O_RDWR);   
    lseek(fd,SEEK_SET,10);
    iRet=write(fd,10,Data);

    printf("%d bytes get successfully written into file\n",iRet);
    
    printf("%s\n",Data);
    
    close(fd);
    return 0;
}