#include<stdio.h>

int main()
{
    int a;
    printf("Please enter val of a:");
    scanf("%d",&a);
    //declaring a pointer type var
    int *p;
    p=&a;
    printf("%d",(*p));
    *p+=2;
    printf("%d",(*p));
    return 0;
}