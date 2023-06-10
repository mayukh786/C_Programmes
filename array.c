#include<stdio.h>

int main()
{
    int arr[5];
    printf("please enter atmost five elements");
    float c = 0;
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        c++;
    }
    int s = 0;
    for (int j=0;j<5;j++)
    {
        s = s+arr[j];
    }
    // printf("%d",s);
    printf("%f",(s/c));
    return 0;
}