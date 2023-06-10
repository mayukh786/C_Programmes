#include<stdio.h>

int main()
{
    int a;
    printf("please enter no of elements:");
    scanf("%d",&a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int maxchillibarbecue=arr[0];
    int minhoneypepper=arr[0];  

    for (int j = 0; j < a; j++)
    {
        if(arr[j]>maxchillibarbecue)
        {
            maxchillibarbecue=arr[j];
        }
        if (arr[j]<minhoneypepper)
        {
            minhoneypepper=arr[j];
        }
    
    }
    printf("\n-----------------------------\n");
    printf("%d\n",maxchillibarbecue);
    printf("%d\n",minhoneypepper);
    
}