#include<stdio.h>
int main ()
{
     int salary;
     float tax;
     printf("please enter your salary to calculate tax:");
     scanf("%d",&salary);
     if(salary<10000)
     {
          tax=salary*0.05;
     }
     else if((salary>10000) && (salary<20000))
    {
          tax=salary*0.07;
    }
    else if((salary>20000)&&(salary<100000))    
    {
          tax=salary*0.09;
    }   
   else
   {
         tax=salary*0.2;
   }
   printf("tax=%f",tax);
   return 0;       
}

