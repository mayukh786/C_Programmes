#include<stdio.h>
int main()
{
    int no;
    printf("please enter a no:");
    scanf("%d",&no);
    switch(no)
    {
        case 10: printf("valid");
            break;
        case 50: printf("valid");
            break;
        case 100:printf("valid");
            break;
        default:printf("invalid");            
    }
}