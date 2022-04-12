#include <stdio.h>
#include <math.h>

int main()
{
    float h,m,s;
    printf("Enter time in Hours : Minutes : Seconds format\n");
    scanf("%f",&h);
    scanf("%f",&m);
    scanf("%f",&s);
    printf("Entered time is %.0f:%.0f:%.0f\n",h,m,s);
    float th=(h+(m/60)+(s/3600));
    printf("Total time= %f hours",th);

    return 0;
}
