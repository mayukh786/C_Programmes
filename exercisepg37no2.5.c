#include <stdio.h>

int main()
 {
    float distance, speed, time;

    printf("Enter the distance (in kilometers): ");
    scanf("%f", &distance);
    
    printf("Enter the time (in hour): ");
    scanf("%f", &time);
    
    speed=distance/time;
    printf("The speed of the vehicle is %.2f kilometres per hour.\n", speed);

    return 0;
}
