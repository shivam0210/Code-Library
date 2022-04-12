#include <stdio.h>
int main()
{
    int a[100][100],n,m;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    int k=0,l=0,i;
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
            printf("%d ",a[k][i]);
        k++;

        for(i=k;i<m;i++)
            printf("%d ",a[i][n-1]);
        n--;

         if(k<m)
        {
            for(i=n-1;i>=l;i--)
            printf("%d ",a[m-1][i]);
            m--;
        }

        if(l<n)
        {
            for(i=m-1;i>=k;i--)
                printf("%d ",a[i][l]);
            l++;
        }

    }

    return 0;
}
