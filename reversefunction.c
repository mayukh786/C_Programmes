#include <stdio.h>

int reverse(int num) 
{
   int reversednum = 0;
   while (num != 0) 
   {
      reversednum = reversednum * 10 + num % 10;
      num /= 10;
   }
   return reversednum;
}

int main() 
{
   int num, reversednum;
   printf("Enter a number: ");
   scanf("%d", &num);
   reversednum = reverse(num);
   printf("The reversed number is: %d", reversednum);
   return 0;
}

