#include <stdio.h>
#include <math.h>
int main()
{
    int t,n,m,flag;
    scanf("%d",&t);
    while(t>0)
    {
        flag=0;
        scanf("%d%d",&n,&m);
        for(int i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<m-1;i++)
        {
           for(int j=i+1;j<m;j++)
           {
               if(a[i]!=a[j])
                {
                    b[p]=a[j];
                    p++;
                }
           }
        }

        t--;
    }
}
