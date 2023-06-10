#include<stdio.h>

int main()
{
    int i;
    int j;
    printf("Please enter no of rows and columns:");
    scanf("%d %d",&i,&j);
    int a[i][j];
    for (i = 0; i < 10; i++) 
    {
        for (j = 0; j < 10; j++) 
        {
            a[i][j] = (i+1) * (j+1);
        }
    }
    printf("MULTIPLICATION TABLE");
    printf("\n------------------------\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("\n");
            printf("%d*%d=%d\t",(i+1),(j+1),a[i][j]);
            
        }
        printf("\n");
        printf("-------------------------------------");
    }
}