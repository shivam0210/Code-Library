#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    long int a[100],k;
    scanf("%d",&t);
    while(t--)
    {
       int sum=0,p=0,flag;
       scanf("%d%ld",&n,&k);
       for(int i=1;i<=n;i++)
            {
                scanf("%ld",&a[i]);
            }
            if(a[1]<k)
            {
                printf("NO 1\n");
            }
            else
            {
                p=a[1];
              for(int i=2;i<=n;i++)
                   {
                       if(p>=k)
                        p=p-k;
                        p=p+a[i];
                       if(p<k)
                       {
                           printf("NO %d\n",i);
                           flag=0;
                           break;
                       }
                       else
                        flag=1;
                   }
                   if(flag==1)
                        printf("YES\n");
            }
    }

    return 0;
}
