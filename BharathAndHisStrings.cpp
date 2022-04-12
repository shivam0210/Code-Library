#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,count,i,j,count1;
    char s[100000],s1[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        l=strlen(s);
        s1[0]=s[0];
        count=1,count1=1;

           for(i=0;i<l;i++)
           {
               for(j=0;j<count;j++)
              if((s[i]>=97)&&(s[i]<=122)&&(s[i]!=s1[j]))
              {
                  s1[count]=s[i];
              }

              if((s1[count]>=97)&&(s1[count]<=122))
                count++;
           }
            printf("%s\n",s1);
    }

    return 0;
}
