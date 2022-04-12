#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000


//You are given an unweighted, undirected graph.
// Write a program to check if it's a tree topology.

vi ar[10002];
int vis[10002];

void dfs(int node)
{
	vis[node] = 1;

	for (int child : ar[node])
		if (vis[child] == 0)
			dfs(child);
}

int main()
{
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);

	int n, m, a, b;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		cin >> a >> b, ar[a].pb(b), ar[b].pb(a);

	int cc_count = 0;
	for (int i = 1; i <= n; i++)
		if (!vis[i])
			dfs(i), cc_count++;

	if (cc_count == 1 && m == n - 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;



	return 0;
}

