#include<stdio.h>
int main()
{
    int no=0;
    int sum=0;
    printf("Enter array size");
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

    for(int i=0;i<no;i++)
    {
        sum=sum+arr[i];
    }
           printf("sum of the  array =%d\n",sum);

    return 0;
}