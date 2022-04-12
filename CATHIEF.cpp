#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,k,x,y;

    cin>>t;
    while(t--)
    {
        cin>>x>>y>>k>>n;
        int d=abs(x-y);
            if(d%(2*k)==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
    }

    return 0;
}
