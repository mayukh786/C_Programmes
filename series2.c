#include<stdio.h>
int main()
{
    int n;
    printf("please enter the value of n:");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    do
    {
        sum = sum + i;
        i = i * 2;
    }while(i<n);
    printf("The sum of the series is: %d", sum);
    return 0;
} 