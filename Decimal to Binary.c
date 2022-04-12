#include <stdio.h>
#include <math.h>

int main()
{
   int n,m,s;
   scanf("%d%d",&n,&m);
   int a[100]={0};
   int b[100]={0};
   int c[100];

    int l=0,k=0;
   while(n>0)
   {
       a[l]=(n%2);
       //printf("%d",a);
       n=n/2;
       l++;
   }

   for(int j=l-1;j>=0;j--)
    printf("%d ",a[j]);

    while(m>0)
    {
       b[k]=m%2;
       m=m/2;
       k++;
    }

    for(int j=k-1;j>=0;j--)
     printf("%d ",a[j]);

    if(k<=l)
        s=l;
    else if(k>l)
        s=k;
    for(int i=s-1;i>=0;i++)
    {
       c[i]=a[i]*b[i];
    }

    for(int i=s-1;i>=0;i++)
        printf("%d ",c[i]);
   return 0;
}
