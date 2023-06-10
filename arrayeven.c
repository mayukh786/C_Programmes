#include<stdio.h>

int main()
{
     int a;
    printf("please enter no of elements in the array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n---------------------------------------------\n");
    for(int j=0;j<a;j++)
    {
        if (arr[j]%2==0)
       {
        printf("%d\n",arr[j]);
       } 
       
    }
}

   