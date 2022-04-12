#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000


vi ar[20001];
int vis[20001], col[20001];


bool dfs(int node, int c)
{
	vis[node] = 1;
	col[node] = c;
	for (int child : ar[node])
	{
		if (vis[child] == 0)
		{
			bool res = dfs(child, c ^ 1);
			if (res == false)
				return false;

		}
		else if (col[node] == col[child])
			return false;
	}
	return true;
}

int main()
{

	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	int t, n, m, a, b;
	cin >> t;
	for (int tc = 0; tc < t; tc++)
	{
		cin >> n >> m;

		for (int i = 1; i <= n; i++) ar[i].clear(), vis[i] = 0; //to clear the adjacency list after each test case.

		for (int i = 1; i <= m; i++)
			cin >> a >> b, ar[a].pb(b), ar[b].pb(a);

		bool flag = true;

		for (int i = 1; i <= n; i++)
		{
			if (vis[i] == 0)
			{
				bool res = dfs(i, 0);
				if (res == false)
					flag = false;
			}
		}

		cout << "Scenario #:" << tc << endl;
		if (flag == false)
			cout << "Suspicious bugs found!" << endl;
		else
			cout << "No suspicious bugs found" << endl;
	}


	return 0;
}