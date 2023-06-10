#include<stdio.h>
int main()
{
    int n;
    printf("please enter a no:");
    scanf("%d",&n);
    int i=1;
    do
    {
        printf("%d\t",i);
        i=i+2;
    } while(i<n);
    
    return 0;

}