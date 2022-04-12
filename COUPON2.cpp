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
	int d, c, a1, a2, a3, b1, b2, b3;

	cin >> d >> c;

	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;

	int day1 = a1 + a2 + a3;
	int day2 = b1 + b2 + b3;

	int initial_cost = day1 + day2 + 2 * d;

	if (day1 >= 150 && day2 >= 150)
	{
		if (c < 2 * d)
			cout << "YES";
		else
			cout << "NO";
	}
	else if (day1 >= 150 || day2 >= 150)
	{
		if (d > c)
			cout << "YES";
		else
			cout << "NO";
	}
	else
	{
		cout << "NO";
	}
}
