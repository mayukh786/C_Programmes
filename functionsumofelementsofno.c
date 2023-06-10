#include <stdio.h>

int sumDigits(int num);

int main() 
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sumDigits(num);

    printf("The sum of the digits in the number is: %d", sum);

    return 0;
}

int sumDigits(int num) 
{
    int digit, sum = 0;

    while (num > 0) 
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}
