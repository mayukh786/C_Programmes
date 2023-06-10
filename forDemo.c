#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number to see multiplication table:");
    scanf("%d",&n);
    for(int i=1;i<11;i++)
    {
        printf("%d * %d = %d",n,i,(n*i));
    }
}