#include <stdio.h>
int main() 
{
    int a,b,operator,result;
    printf("Enter an operator [1.+, 2.-,3. *, 4./]: ");
    scanf("%d", &operator);
    printf("Enter first operand: ");
    scanf("%d", & a );
    printf("Enter second operand:");
     scanf("%d", & b );
    switch(operator) 
    {
        case 1:
            result = a + b;
            break;

        case 2:
            result = a - b;
            break;

        case 3:
            result = a * b;
            break;

        case 4:
            result = a / b;
            break;

        default:
            printf("Error! Invalid operator.");
    }
    printf("Result:%d",result);
}
