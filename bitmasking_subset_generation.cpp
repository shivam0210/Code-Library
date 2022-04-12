#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000

int main()
{
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	char ar[4] = {'A', 'B', 'C', 'D'};
	int n;
	cin >> n;
	int tot = 1 << n;
	for (int mask = 0; mask < tot; mask++)
	{
		for (int i = 0; i < n; i++)
		{
			int f = 1 << i;
			if ((mask & f) != 0)
				cout << ar[i] << ' ';
		}
		cout << endl;
	}

	return 0;
}