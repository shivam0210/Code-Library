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
	int n, x, y, z;
	int x_sum = 0;
	int y_sum = 0;
	int z_sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y >> z;

		x_sum += x;
		y_sum += y;
		z_sum += z;
	}

	cout << x_sum << " " << y_sum << " " << z_sum << endl;

	if (x_sum != 0 || y_sum != 0 || z_sum != 0)
		cout << "NO";
	else
		cout << "YES";
}
