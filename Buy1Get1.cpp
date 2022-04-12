#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   int t,i,j;
   char s[200];
   scanf("%d",&t);

   while(t--)
   {
       gets(s);
       int l=strlen(s);
       int c=0,b[200]={0};
      for(i=0;i<l-1;i++)
      {
          for(j=i;j<l;j++)
          {
              if(s[i]==s[j])
              {
                  b[c]++;
              }
          }
          c++;
      }

      int s=0;
      for(i=0;i<c;i++)
        {
            if(b[i]%2==0)
                b[i]=b[i]/2;
            else
                b[i]=(b[i]/2)+1;

            s=s+b[i];
        }
      printf("%d\n",s);
   }
   return 0;
}
