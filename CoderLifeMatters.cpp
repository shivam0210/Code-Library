#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int t,n,a;
    scanf("%d",&t);
    while(t>0)
    {
        int c=0,flag=0;
        for(int i=1;i<=30;i++)
          {
              scanf("%d",&a);
                if(a==1)
                    c++;
                if(c>5)
                    {
                        flag=1;
                        printf("#coderlifematters\n");
                        continue;
                    }
                if(a==0)
                    c=0;

          }
        if(flag==0)
        printf("#allcodersarefun\n");

     t--;
    }
    return 0;
 }
