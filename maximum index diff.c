#include <stdio.h>

int main()
{
	//code
	int t;
	long int n;

	scanf("%d",&t);
	while(t>0)
	{
	    int s,s1=0;
	    scanf("%ld",&n);
	    long int a[n];

	    for(int i=0;i<n;i++)
	    scanf("%ld",&a[i]);

	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(a[i]<=a[j])
	            {
	                s=j-i;
	            }
	        }
	             if(s>s1)
	              s1=s;
	    }
	    printf("%d\n",s1);
	    t--;
	}


		return 0;
}
