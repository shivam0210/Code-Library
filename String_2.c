#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int search(char str1[100],char str2[100])
{
  int t1=strlen(str1);
  int t2=strlen(str2);
    int p,flag=1,c;
  for(int i=0;i<t1;i++)
  {
     if(str1[i]==str2[0])
     {
         p=i;
         for(int j=0;j<t2;j++)
         {
             if(str1[p]!=str2[j])
                {
                    flag=1;
                    break;
                }
             else if((str1[p]==str2[j])&&(j==(t2-1)))
             {
                 flag=0;
                 return flag;
             }
            p++;
         }

     }

  }

   return flag;

}

int main()
{
    char s[100],ss[100];
    gets(s);
    gets(ss);
    int f=search(s,ss);
    if(f==0)
        printf("Search successfull.\n");
    else if(f==1)
        printf("Search unsuccessfull.\n");
    return 0;
}

