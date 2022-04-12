//To compute the distance between Mohan and Sohan

#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float distance,time_by_walking,time_by_car;

    printf("Enter the coordinates of Mohan's position (x1,y1)\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinates of Sohan's position (x2,y2)\n");
    scanf("%d%d",&x2,&y2);

    distance=sqrt( pow((x2-x1),2)+pow((y2-y1),2)); //formula to calculate distance between Mohan and Sohan


    float speed_of_Mohan =2;  //Speed of Mohan walking
    float speed_of_car;
    printf("Input Car Speed\n");
    scanf("%f",&speed_of_car);  //Taking speed of car in input

    time_by_car=distance/speed_of_car; //Time taken by car formula
    time_by_walking=distance/speed_of_Mohan; //Time taken by walking formula

    printf("Distance = %f kms\n",distance);
    printf("Time taken by Mohan walking = %f hrs\n",time_by_walking);
    printf("Time taken by car = %f hrs = %f mins\n",time_by_car,time_by_car*60);

    return 0;
}
