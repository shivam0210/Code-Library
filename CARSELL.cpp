#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int *arr;
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int u;
        arr=(long long int*)malloc(n*sizeof(long long int));
        for(long long int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
        sort(arr,arr+n,greater<long long int>());
        long long int s=0;
        for(long long int i=0;i<n;i++)
        {
            arr[i]=(arr[i]-i);
            if(arr[i]<=0)
            arr[i]=0;
            s=s+arr[i];
        }
        s=s%1000000007;
        cout<<s<<endl;
        free(arr);
    }
    return 0;
}
