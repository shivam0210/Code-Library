#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int b[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    sort(b,b+n);

    for(long long int i=0;i<n;i++)
    {
        if(i==0)
            cout<<b[i]<<" ";
        else
            cout<<b[i]-b[i-1]<<" ";
    }

    cout<<endl;
    return 0;
}
