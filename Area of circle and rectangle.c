#include <stdio.h>
#include <math.h>

int main()
{
    float radius,length,breadth,areaCircle,areaRectangle,pi=3.14;

    printf("Enter the radius of circle\n");
    scanf("%f",&radius);                                  //Taking the radius of the circle in input
    printf("Enter the length and breadth of rectangle\n");
    scanf("%f%f",&length,&breadth);                       //Taking the length and breadth of the rectangle in input

    areaCircle=pow(radius,2)*pi;                          //Area of circle formula
    areaRectangle=length*breadth;                         //Area of rectangle formula

    printf("Area of Rectangle = %.3f sq units\n Area of Circle = %.3f sq units\n",areaRectangle,areaCircle);    //Displaying the results


    return 0;
}
