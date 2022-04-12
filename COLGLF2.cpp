#include<bits/stdc++.h>
using namespace std;

#define ll long int

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
	ll s;
	cin >> s;

	ll q[s];
	for (ll i = 0; i < s; i++)
		cin >> q[i];

	ll sum = 0;
	ll cnt = 0;

	while (s--)
	{
		ll e;
		cin >> e;

		ll t[e];

		for (ll i = 0; i < e; i++)
			cin >> t[i];

		for (int i = 0; i < e; i++)
		{
			if (i == 0)
				sum += t[i];
			else
				sum += (t[i] - q[cnt]);

			//cout << sum << endl;
		}

		cnt++;
	}

	cout << sum;

}
