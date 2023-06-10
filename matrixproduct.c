#include<stdio.h>

int main()
{
     int row;
    int col;
    printf("Please enter no of rows and cols:");
    scanf("%d %d",&row,&col);
    int a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int prod = 1;
    for(int k=0;k<row;k++)
    {
        for(int l=0;l<col;l++)
        {
            prod=prod*a[k][l];
        }
    }
    printf("\n.................................\n");
    printf("%d\n",prod);
}
