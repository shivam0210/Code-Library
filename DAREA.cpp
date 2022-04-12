#include<bits/stdc++.h>
using namespace std;

#define ll long long int

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

	ll t = 1;
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
	int n, num, rem = 0;
	cin >> n >> num;

	string str = "";

	while (num > 0)
	{
		rem = num % n;
		num = num / n;

		if (rem >= 0 and rem <= 9)
		{
			char s = rem + '0';
			str.insert(0, 1, s);
		}
		else
		{
			char s = rem - 10 + 65;
			str.insert(0, 1, s);
		}
	}

	cout << str;
}