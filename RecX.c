#include<stdio.h>

void Display(int No)
{
    static int iCnt=0;

    if(iCnt<No)
    {
        printf("Jay Ganesh..\n");
        iCnt++;
        Display(No);
    }
}
int main()
{
    Display(4);
    
    return 0;
}