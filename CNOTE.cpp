#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int t,n,x,y,k,p,c;
   cin>>t;
   while(t--)
   {
       cin>>x>>y>>k>>n;
       long int u=x-y;
       int flag=0;
       for(int i=0;i<n;i++)
       {
           cin>>p>>c;
           if((p>=u)&&(c<=k)&&(flag!=1))
           {
               flag=1;
           }
       }
       if(flag==1)
        cout<<"LuckyChef\n";
       else if(flag==0)
        cout<<"UnluckyChef\n";
   }
   return 0;
}
