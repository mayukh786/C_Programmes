#include<stdio.h>
int main()
{
    int x;
    int result;
    printf("enter value of x:");
    scanf("%d",&x);
    result=(x>5)?(x*5):(x*2);
    printf("%d",result);
}