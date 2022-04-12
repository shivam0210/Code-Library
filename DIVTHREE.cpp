#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n,k,d;

    cin>>t;
    while(t--)
    {
        cin>>n>>k>>d;

        size_t arr[n];
        for(size_t i=0;i<n;i++)
            cin>>arr[i];

        size_t sum=0;
        size_t s=accumulate(arr,arr+n,sum);

        if(s/k>=d)
            cout<<d<<endl;
        else
            cout<<(s/k)<<endl;
    }

    return 0;
}
