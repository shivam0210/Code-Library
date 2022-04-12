#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n,k,a[10000],i,j;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==k)
                    {
                        flag=1;
                        break;
                    }
            }
        }

        if(flag==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
