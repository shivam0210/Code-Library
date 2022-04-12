#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float a[100][100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
        scanf("%f",&a[i][j]);
    for(int i=0;i<n;i++)
        {
            a[i][3]=abs(1-(a[i][2]/a[i][1]));
        }
    int min;
    for(int i=0;i<n-1;i++)
    {
           min=i;
        for(int j=i+1;j<n;j++)
            {
                if(a[min][3]>=a[j][3])
                    min=j;
            }
         float b=a[min][3];
         a[min][3]=a[i][3];
         a[i][3]=b;
         printf("%0.0f\n",a[min][0]);
    }
}
