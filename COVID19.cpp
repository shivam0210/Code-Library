#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[10];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int min=10,max=1;
        int c=1,j;
        for(int i=0;i<n-1;)
        {
            c=1;
           for(j=i+1;j<n,((a[j]-a[j-1])<=2);j++)
           {
               c++;
           }
           if(i<n-1)
           a[i]=c;
           i=j;
        }
           a[n-1]=c;
        sort(a,a+n);
        cout<<a[0]<<" "<<a[n-1];
    }
    return 0;
}
