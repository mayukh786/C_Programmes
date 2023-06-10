#include <stdio.h>

void printFactors(int num) 
{
    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printFactors(num);
    return 0;
}


