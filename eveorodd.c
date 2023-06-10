#include<stdio.h>
int main()
{
    int a;
    int result;
    printf("please enter a number:");
    scanf("%d",&a);
    result=(a%2==0)?printf("%d is even",a) : printf("%d is odd",a);
    return 0;
}
    