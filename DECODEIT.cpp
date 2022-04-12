#include <bits/stdc++.h>
using namespace std;

int main()
{
    size_t t,n;
    string str;
    cin>>t;

    while(t--)
    {
        char a ='a';
        cin>>n;
        cin>>str;
        int sum=0;

        for(int i=0;i<n;i=i+4)
        {
            sum=0;
            for(int j=i,p=3;j<i+4,p>=0;j++,p--)
            {
                if(str[j]=='1')
                    {
                        sum += pow(2,p);
                    }
            }
            printf("%c",a+sum);
        }
        cout<<endl;
    }
    return 0;
}
