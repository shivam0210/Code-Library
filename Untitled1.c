#include <stdio.h>
#include <math.h>

int main()
{
	//code
	int t,n,a[10000];
	scanf("%d",&t);
	while(t--)
	{
	    int p1;
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    p1=1000000;
	    for(int i=0;i<n;i++)
	    {
	        int p=a[i];
	        for(int j=0;j<n;j++)
	        {
	            if(p>a[j])
	            p=p+abs(p-a[j]);
	            else if(p<a[j])
	            p=p-abs(p-a[j]);
	        }
	        if((p>=0)&&(a[i]<p1))
	        p1=a[i];
	    }

	    printf("%d\n",p1);
	}
	return 0;
}
