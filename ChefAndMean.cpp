#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,k;
	long int n;
	cin>>t;
	while(t--)
	{
		float c=0,s=0,s1,p;
		cin>>n;
		vector <int> a;
		a.resize(100000);
		for(i=1;i<=n;i++)
		{
		  cin>>a[i];
		}
		s=accumulate(a.begin(),a.end(),0);
		
		int d=((n-1)/n);
		
		for(i=1;i<=n;i++)
		{
			s1=s-a[i];
			float e=s1/(n-1),f=s/n;
			
			if(e==f)
			{c=i;
			break;}			
		}
		if(c>0)
		cout<<c<<endl;
		else 
		cout<<"Impossible"<<endl;
   }
   return 0;
}
