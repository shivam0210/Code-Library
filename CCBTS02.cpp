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
	int n, flag = 0;
	cin >> n;

	string str[n];

	for (int i = 0; i < n; i++)
		cin >> str[i];

	for (int i = 0; i < n; i++)
	{
		if (str[i] == "start")
			flag = 1;
		else if (str[i] == "restart")
		{
			if (flag != 1)
				flag = 1;
		}
		else if (str[i] == "stop")
		{
			if (flag != 1)
			{
				cout << "404";
				flag = -1;
				break;
			}
			else
			{
				flag = 0;
			}
		}
	}

	if (flag != -1)
		cout << "200";
}
