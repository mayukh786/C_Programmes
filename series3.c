#include<stdio.h>
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
      for (int i = 1; i <= n; i++) 
      {
        printf("%d ", i * i);
      }      
}