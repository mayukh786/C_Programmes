#include<stdio.h>
int main()
{
    int a;
    printf("please enter value of array:");
    scanf("%d",&a);
    int *p;
    p=&a;
    int arr[a];
     for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0; 
    return 0;
}
