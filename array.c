#include<stdio.h>
int main()
{
    int no=0;
    printf("Enter number");
    scanf("%d",&no);

    int arr[no];

    for(int i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array element\n");
    for(int i=0;i<no;i++)
    {
        printf("%d",arr[i]);
    }
    for(int i=0;i<arr[0])
    return 0;
}