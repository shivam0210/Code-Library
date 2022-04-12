#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c0,c1,h,k;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>c0>>c1>>h;
        cin>>s;
        if(c0>c1)
            k=1;
        else if(c0<c1)
            k=0;
        else
            k=-1;

        int o=0; int z=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                o++;
            else if(s[i]=='0')
                z++;
        }
        int ic = o*c1+z*c0;
        if(k==0)
        {
            int c=0;
            while(c<ic && o>0)
            {
                c = c+h+c0;
                o--;
            }
            if(o>=0)
                c = c+(c0*z)+(c1*o);
            else
                c = c+(c0*z);
            if(c<ic)
                ic=c;
        }
        else if(k==1)
        {
            int c=0;
            while(c<ic && z>0)
            {
                c=c+h+c1;
                z--;
            }
            if(z>=0)
                c=c+(c0*z)+(c1*o);
            else
                c=c+(c1*o);
            if(c<ic)
                ic=c;
        }

        cout<<ic<<endl;
    }
}
