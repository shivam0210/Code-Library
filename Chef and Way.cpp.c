#include <stdio.h>
#include <math.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    long int p=pow(n,2),p1;

   /* for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((j-i>=1)&&(j-i<=k))
            {
                p=a[i]*a[j];
                if(p<p1)
                    p1=p;
            }
        }
    }*/

    while(j>0)
    {
        for(i=j,i<n;i++)
        {
            for(int l=i+1;l<=n;l++)
            {
                if((l-i>=1)&&(l-i<=k))
                    {
                        j=l;p=p*a[j];break;
                    }
            }
        }

    }
     printf("%ld",p1);

     return 0;

}
