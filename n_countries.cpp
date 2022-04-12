#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000



vi ar[10001];
int vis[10001], dist[10001];


void dfs(int node, int d)
{
	vis[node] = 1;
	dist[node] = d;
	for (int child : ar[node])
	{
		if (!vis[child])
		{
			dfs(child, dist[node] + 1);
		}
	}

}

int main()
{
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);

	int n, q, a, b;
	cin >> n;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> a >> b, ar[a].pb(b), ar[b].pb(a);
	}

	dfs(1, 0); // Single source shortest path.

	int ans = -1, min_dist = INF;
	cin >> q;
	while (q--)
	{
		int girl_city;
		cin >> girl_city;
		if (dist[girl_city] < min_dist)
			min_dist = dist[girl_city], ans = girl_city;
		else if (dist[girl_city] == min_dist && girl_city < ans)
			ans = girl_city;
	}
	cout << ans << endl;
	return 0;
}

