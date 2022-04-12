#include<bits/stdc++.h>
using namespace std;

#define MAX_PRODUCT 1000000007
#define ll long long int

void solve();
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t = 1;
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

	ll a[n];

	for (ll i = 0; i < n; i++)
		cin >> a[i];

	sort(a, a + n);

	ll min_prod = a[0] * a[n - 1];

	for (ll i = 0; i < n; i++)
	{

	}


}
