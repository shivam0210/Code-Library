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
	ll n, k;
	cin >> n >> k;

	ll arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	int min_diff = arr[k - 1] - arr[0];
	for (int i = 0; i < n - k - 1; i++)
	{
		if (min_diff > (arr[i + k - 1] - arr[i]))
			min_diff = arr[i + k - 1] - arr[i];
	}

	cout << min_diff;
}
