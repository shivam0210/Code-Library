#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[1000];
    cin>>t;
    while(t--)
    {
        int five[2],ten[2],fif[2];
        five[0]=0,fif[0]=0,ten[0]=0;
        int flag=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
        {
            if(a[0]>5)
            {
                flag=1;
                break;
            }

            if(a[i]==5)
            {
                five[0]++;
            }
            else if(a[i]==10)
            {
                if(five[0]==0)
                {
                    flag=1;
                    break;
                }
                else if(five[0]>0)
                {
                    five[0]--;
                    ten[0]++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(a[i]==15)
            {
                if(ten[0]==0)
                {
                    if(five[0]<2)
                    {
                        flag=1;
                        break;
                    }
                    else if(five[0]>=2)
                    {
                        five[0]=five[0]-2;
                        fif[0]++;
                    }
                }
                else if(ten[0]>0)
                {
                    ten[0]--;
                    fif[0]++;
                }
                else
                {
                    flag==1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else if(flag==0)
            cout<<"YES"<<endl;
    }

    return 0;
}
