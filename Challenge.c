#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100],b[100]={0},c[100]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
        else if(a[i]%2!=0)
        {
            c[l]=a[i];
            l++;
        }

    }
    int m;
    if(k<l)
        m=l;
    else m=k;

    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(b[i]>b[j])
            {
                int t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }

    for(int i=0;i<l-1;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(c[i]<c[j])
            {
                int q=c[i];
                c[i]=c[j];
                c[j]=q;
            }
        }
    }

    a[0]=0;
    for(int i=1,j=0,p=0;i<(2*m);i++)
    {

       if(i%2==0)
       {
           a[i]=c[j];
           j++;
       }
       else
       {
           a[i]=b[p];
           p++;
       }
    }

    for(int i=0;i<(2*m);i++)
        printf("%d ",a[i]);

   return 0;
}
