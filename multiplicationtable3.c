#include<stdio.h>

int main()
{
    int row;
    int col;
    int i;
    int j;
    
    printf("Please enter no of rows and columns:");
    scanf("%d %d",&row,&col);
    printf("MULTIPLICATION TABLE");
    printf(" ");
    for(int i=1;i<=row;i++)
    {
        printf("%d|",i);
        printf("\n");
        printf("________________________________________\n");
        for(int j=1;j<=col;j++)
        {
            printf("%d\t",(i*j));
        }
        printf("\n");
    }
    
}