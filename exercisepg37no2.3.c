#include<stdio.h>

int main()
{
int a=5;
scanf("%d",&a);
printf("MULTIPLICATION TABLE OF 5");
printf("\n----------------------------------------\n");
for (int b = 1;b <= 10;b++)
{
    printf("%d\t",(a*b));
}
}