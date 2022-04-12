#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        size_t lc=count(str.begin(),str.end(),'L');
        size_t rc=count(str.begin(),str.end(),'R');
        size_t uc=count(str.begin(),str.end(),'U');
        size_t dc=count(str.begin(),str.end(),'D');

        if(str.length()==1)
        {
            if(str[0]=='L')
                cout<<"-1 0"<<endl;
            else if(str[0]=='R')
                cout<<"1 0"<<endl;
            else if(str[0]=='U')
                cout<<"0 1"<<endl;
            else if(str[0]=='D')
                cout<<"0 -1"<<endl;
        }
        else if(lc>0&&rc<=0 || rc>0&&lc<=0 || uc>0&&dc<=0 || dc>0&&uc<=0 || lc==rc&&uc==dc)
            cout<<"0 0"<<endl;
        else if((abs(lc-rc)>1 && abs(uc-dc)==0) || (abs(lc-rc)==0 && abs(uc-dc)>1))
            cout<<"0 0"<<endl;
        else
        {
            size_t d=abs(lc-rc);
            size_t e=abs(uc-dc);

            if(lc>rc)
            {
                size_t x=0,y=0;
                size_t count=0;
                for(size_t i=0;i<str.length();i++)
                {
                   if(str[i]=='L')
                        {x--; count++;}
                   else if(str[i]=='R')
                        x++;
                   else if(str[i]=='U')
                        y++;
                   else if(str[i]=='D')
                        y--;
                    if(count==rc+1)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                }
            }
            else if(lc<rc)
            {
                size_t x=0,y=0;
                size_t count=0;
                for(size_t i=0;i<str.length();i++)
                {
                   if(str[i]=='R')
                        {x++; count++;}
                   else if(str[i]=='L')
                        x--;
                   else if(str[i]=='U')
                        y++;
                   else if(str[i]=='D')
                        y--;
                        if(count==lc+1)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                }
            }
            else if(uc>dc)
            {
                size_t x=0,y=0;
                size_t count=0;
                for(size_t i=0;i<str.length();i++)
                {
                   if(str[i]=='L')
                        x--;
                   else if(str[i]=='R')
                        x++;
                   else if(str[i]=='U')
                        {y++; count++;}
                   else if(str[i]=='D')
                        y--;
                        if(count==dc+1)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                }
            }
            else if(uc<dc)
            {
                size_t x=0,y=0;
                size_t count=0;
                for(size_t i=0;i<str.length();i++)
                {
                   if(str[i]=='L')
                        x--;
                   else if(str[i]=='R')
                        x++;
                   else if(str[i]=='U')
                        y++;
                   else if(str[i]=='D')
                        {y--; count++;}
                        if(count==uc+1)
                    {
                        cout<<x<<" "<<y<<endl;
                        break;
                    }
                }
            }

        }
    }

    return 0;
}
