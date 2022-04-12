#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    else
        return gcd(y, x%y);
}

int maxfact(int g, int n)
{
    int max_fact = 0;

    for(int i=1;i*i<=g;i++)
    {
        if(g%i==0)
        {
            if(i<=n)
                max_fact = max(max_fact, i);
            if(g/i <= n)
                max_fact = max(max_fact, g/i);
        }
    }

    return max_fact;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        int arr[m];

        for(int i=0;i<m;i++)
            cin>>arr[i];

        int g=0;

        for(int i=0;i<m;i++)
        {
            int g=gcd(g, arr[i]);
        }

        if(g>n)
        {
            int factor = maxfact(g,n);
            g=factor;
        }
        cout<<n-g<<endl;

    }

    return 0;
}
