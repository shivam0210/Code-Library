#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x1,x2,x3,y1,y2,y3;
    cin>>t;
    while(t--)
    {
       float r;
       cin>>r;
       cin>>x1>>y1>>x2>>y2>>x3>>y3;
       float a,b,c;
       a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
       b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
       c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
        if((a<=r)&&(c<=r))
        cout<<"yes"<<endl;
        else if((a>r)&&(b<=r)&&(c<=r))
        cout<<"yes"<<endl;
        else if((c>r)&&(a<=r)&&(b<=r))
        cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}
