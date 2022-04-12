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
	string str;
	cin >> str;

	int p = 0, c = 0, m = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'P')
			p++;
		else if (str[i] == 'C')
			c++;
		else if (str[i] == 'M')
			m++;
	}

	if (p && c && m)
		cout << "YES";
	else
		cout << "NO";
}
