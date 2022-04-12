#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,a[100];
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
       for(int i=0;i<n-1;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(a[j]<a[i])
               {
                   int t=a[i];
                   a[i]=a[j];
                   a[j]=t;
               }
           }
       }
       if(a[0]==0)
        printf("%d",a[1]);
       else if(a[0]>0)
        printf("%d",a[0]);
       printf("\n");
   }
   return 0;
}
