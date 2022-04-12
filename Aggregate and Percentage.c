#include <stdio.h>
#include <math.h>

int main()
{
    float m1,m2,m3,m4,m5,totalMarks,aggregate,percentage;
    int max;

    printf("Enter the marks of 5 different subjects\n");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    printf("Enter maximum marks per subject\n");
    scanf("%d",&max);

    totalMarks=m1+m2+m3+m4+m5;
    aggregate=totalMarks/5;
    percentage=(totalMarks/(5*max))*100;

    printf("Aggregate of the 5 subjects = %.3f\nPercentage obtained = %.3f percent",aggregate,percentage);


    return 0;
}
