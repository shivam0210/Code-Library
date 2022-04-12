#include <stdio.h>
#include <math.h>

int main()
{
    float distance;

    printf("Enter distance in kilometers\n");
    scanf("%f",&distance);                                         //Taking the distance in kilometers from the user

    //Displaying the results
    printf("Distance in kilometers = %.3f km\n",distance);

    printf("Distance in meters = %.3f m\nDistance in feet= %.3f feet\nDistance in centimeters = %.3f cm\nDistance in inches = %.3f inches\n",distance*1000,distance*3280.84,distance*100000,distance*39370.1);


    return 0;
}

