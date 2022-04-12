#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<long int> s1;
    stack<long int> s2;
    stack<long int> s3;

    long int t,n,arr[1000],u,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(long int i=0;i<n;i++)
        {
            cin>>arr[i];
            s1.push(arr[i]);
        }

        while(!s1.empty())
        {
                    u=s1.top();
                    s1.pop();
                    c=1;
                    while((!s1.empty())&&(s1.top()<u))
                    {
                        c++;
                        s2.push(s1.top());
                        s1.pop();
                    }
                    s3.push(c);

                    while(!s2.empty())
                    {
                        s1.push(s2.top());
                        s2.pop();
                    }
        }
                while(!s3.empty())
                {
                    cout<<s3.top()<<" ";
                    s3.pop();
                }

        cout<<endl;
    }

	return 0;
}
