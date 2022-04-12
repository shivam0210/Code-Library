#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007

ll power(ll x, ll y)
{
	ll res = 1;
	x = x % MOD;

	if (x == 0) return 0;

	while (y > 0)
	{
		if (y & 1)
			res = (res * x) % MOD;

		y = y >> 1;
		x = (x * x) % MOD;
	}
	return res;
}

void solve();

int32_t main()
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
	ll n, m;
	cin >> n >> m;

	ll ans = power(2, n) - 1;

	ans = power(ans, m);

	cout << ans;
}
