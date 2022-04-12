#include<bits/stdc++.h>
using namespace std;
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
	//cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}
void solve()
{
	int n, f, sum = 0;

	cin >> n;
	int p = n;

	while (p--)
	{
		cin >> f;
		sum += f;
	}

	int d = sum % (n + 1);
	d++;

	while (d % (n + 1) != 0);
	d++;

	cout << d;
}