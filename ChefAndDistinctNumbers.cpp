#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,flag;
	long int n,i,j;
	cin>>t;
	while(t--)
	{
		flag=0;
		cin>>n;
		long int *a;
		a=(long int*)malloc(n*sizeof(long int));
		for(i =0;i<n;i++)
		cin>>a[i];
		
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
			flag=1;
			break;
		    }
		}
		
		if(flag==0)
		printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
