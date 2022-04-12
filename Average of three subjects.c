#include <stdio.h>
#include <math.h>

int main()
{
    float phy,math,chem,avg,sum;

    printf("Enter marks of Physics,Maths & Chemistry respectively\n");
    scanf("%f%f%f",&phy,&math,&chem);                             //Taking the marks obtained in given three subjects
    sum=phy+chem+math;                                            //Total marks obtained in the three subjects

    avg=sum/3;                                                    //Average of the three subjects

    printf("Average of the three subjects = %f",avg);             //Displaying the results

    return 0;

}
