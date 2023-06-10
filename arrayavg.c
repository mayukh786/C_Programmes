#include<stdio.h>
int main()
{
    int a;
    printf("please enter value of array:");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    //sum of all the elements in the array
    int sum = 0; 
    for (int j=0;j<a;j++)
    {
        sum=sum+arr[j];
    }
    // printf("sum:%d",sum);
    printf("\n avg=%d",(sum/a));
}
