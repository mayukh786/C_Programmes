#include<stdio.h>
int main()
{
    int unit,charge;
    printf("please input no. of units to calculate electrical charge:");
    scanf("%d",&unit);
    if(unit<50)
    {
       charge=(unit*2)+10;
    }
    else if((unit>50) && (unit<100))
    {
        charge=(unit*3)+10;
    }
    else if((unit>100) && (unit>200))
    {
        charge=(unit*5)+10;
    }
    else
    {
        charge=(unit*7)+10;
    }
    printf("charge=%d",charge); 
}