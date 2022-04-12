#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y,k,flag=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x>>y;
        flag=0;
        if(x==y)
            flag=1;
        else if(k==n || y>n || y<1)
            flag=0;
        else if(n%2!=0)
            flag=1;
        else if(n%2==0)
        {
            if(k==(n/2))
            {
                if(k==abs(y-x))
                    flag=1;
                else
                    flag=0;
            }
            else if((k%n)%2==0)
            {
               if(x%2==0 && y%2!=0)
                flag=0;
               else if(x%2!=0 && y%2==0)
                flag=0;
               else
                flag=1;
            }
            else if((k%n)%2!=0)
                flag=1;
        }
        if(flag)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }
}
