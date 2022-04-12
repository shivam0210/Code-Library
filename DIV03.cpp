#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
void solve()
{
	ll arr[10], k;

	for (int i = 1; i <= 10; i++)
	{
		cin >> arr[i];
	}
	cin >> k;

	for (int i = 10; i >= 1; i--)
	{
		if (k > 0)
		{
			if (arr[i] > k)
			{
				arr[i] = arr[i] - k;
				k = 0;
				cout << i;
				return;
			}
			else if (arr[i] <= k)
			{
				k = k - arr[i];
			}

		}
		else if (k == 0)
		{
			if (arr[i] > 0)
			{
				cout << i;
				return;
			}
		}
	}
}
