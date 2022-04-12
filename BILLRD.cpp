#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>x>>y;

        if(x==y)
            cout<<n<<" "<<n<<endl;
        else
        {
            if(x>y)
            {
                y=y+(n-x);
                x=n;

                if(k%4!=0)
                    k=k%4;
                else
                    k=4;

                k--;

                while(k--)
                {
                    if((x==0 && y==0) || (x==n && y==n) || (x==0 && y==n) || (x==n && y==0))
                        break;
                    else if(x==n)
                    {
                        x=x-(n-y);
                        y=n;
                    }
                    else if(x==0)
                    {
                        x=x+(y-0);
                        y=0;
                    }
                    else if(y==n)
                    {
                        y=y-(x-0);
                        x=0;
                    }
                    else if(y==0)
                    {
                        y=y+(n-x);
                        x=n;
                    }
                }
                cout<<x<<" "<<y<<endl;
            }
            else if(x<y)
            {
                x=x+(n-y);
                y=n;

                if(k%4!=0)
                    k=k%4;
                else
                    k=4;

                k--;

                while(k--)
                {
                    if((x==0 && y==0) || (x==n && y==n) || (x==0 && y==n) || (x==n && y==0))
                        break;
                    if(y==n)
                    {
                        y=y-(n-x);
                        x=n;
                    }
                    else if(x==n)
                    {
                        x=x-y;
                        y=0;
                    }
                    else if(y==0)
                    {
                        y=y+x;
                        x=0;
                    }
                    else if(x==0)
                    {
                        x=x+(n-y);
                        y=n;
                    }
                }

                cout<<x<<" "<<y<<endl;
            }
        }
    }

    return 0;
}
