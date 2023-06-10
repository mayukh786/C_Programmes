#include<stdio.h>

int main()
{
    int a;
    printf("please enter value of array:");
    scanf("%d",&a);
    int *p;
    int arr[a];
    p=arr;
    for(int j=0;j<a;j++)
    {
        printf("Please enter element at position %d:",j);
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<a;i++)
    {
        *(p+i)=(*(p+i))+2;
        printf("%d\n",*(p+i));
    }
    return 0;
}