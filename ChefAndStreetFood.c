#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    int a[100][3];
    double p,p1=0;
    scanf("%d",&t);
    while(t--)
    {
        p1=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
          for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);
        for(int i=0;i<n;i++)
        {
            if((a[i][1]%(a[i][0]+1))==0)
            {
                p=a[i][1]/(a[i][0]+1);
                if(p>p1)
                    p1=p;
            }
            else
               d=floor(p=a[i][1]/(a[i][0]+1));
        }
    }
}
