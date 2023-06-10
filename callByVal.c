#include<stdio.h>

int add(int a,int b)
{
    int result;
    result=a+b;
    return result;
}
int sub(int a,int b)
{
    int result;
    result=a-b;
    return result;
}
int mul(int a,int b)
{
    int result;
    result=a*b;
    return result;
}
float div(int a,int b)
{
    float result;
    result=a/(float)b;
    return result;
}
int main()
{
    int x,y;
    printf("\nPlease enter two operands:");
    scanf("%d %d",&x,&y);
    printf("%d\n",add(x,y));//calling add(x,y) to call the function
    printf("%d\n",sub(x,y));
    printf("%d\n",mul(x,y));
    printf("%f\n",div(x,y));
    return 0;
}