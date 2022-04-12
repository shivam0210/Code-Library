#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,flag,a[100];
    unsigned long int n,i,th,tw,h;
    scanf("%d",&t);
    while(t--)
    {
       cin>>n;
       flag=1;
       long long int p=n;

     while(n%10==0)
     {
         n=n/10;
     }
     if(n==1)
     {
         printf("Yes\n");
         break;
     }
     else
     {
         n=p;
          while(n%20==0)
      {
          n=n/20;
      }

      while(n%10==0)
      {
          n=n/10;
      }

      if(n!=1)
        printf("No\n");
      else if(n==1)
        printf("Yes\n");
    }
     }



    return 0;
}

