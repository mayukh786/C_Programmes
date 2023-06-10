#include<stdio.h>

int main()
{
    //LCM using while loop
    int a,b;
    printf("Please enter two numbers:");
    scanf("%d %d",&a,&b);
    //LCM using while loop
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }    
        printf("GCD=%d",a);
    return 0;
}