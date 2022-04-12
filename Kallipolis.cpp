#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll n;
    cin>>n;
    ll a[n], p, result=-1;

    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
    ll max = *max_element(a,a+n);
    auto itr = find(a, a+n, max);

    int flag=1;

    for(ll i=0;i<n;i++)
    {
        if(max%a[i] != 0)
        {
            flag=0;
            break;
        }
    }


    if(flag)
        cout<<(itr-a+1)<<endl;
    else
        cout<<"-1"<<endl;


    return 0;
}
