#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a[100],n;
    cin>>t;
    while(t--)
    {
        int flag=0,one=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
            int c=0;
        for(int i=0;i<n;i++)
        {
            c++;
           if(a[i]==1)
           {
               one++;
               if(c<6)
               {
                   if(one>1)
                   {
                       flag=1;
                       break;
                   }
               }
               c=0;
           }
        }
        if(flag==1)
            printf("NO\n");
        else if(flag==0)
            printf("YES\n");
    }
    return 0;
}
