#include <stdio.h>
#include <math.h>

int main()
{
   int t,n,a[1000];
   scanf("%d",&t);
   while(t>0)
   {
       int flag=0;
       int sum=0;
       scanf("%d",&n);
       for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
       for(int i=0;i<n;i++)
       {
           sum=sum+a[i];
       }

       for(int i=1;i<=sum;i++)
       {
           if((i>(sum-i))&&(((sum-i)-i)<=1))
              {flag=1;break;}

       }

       if(flag==0)
        printf("NO\n");
       if(flag==1)
        printf("YES\n");
       t--;
   }
   return 0;
}
