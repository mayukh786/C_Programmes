#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number for which you want your multiplication table:");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\n",n*i);
        i=i+1;
    } while (i<11);
    
    return 0;
}