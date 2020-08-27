#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool dfs(int u, vector<int> &edges, vector<bool> &visited, vector<vector<bool> > &adj) {
	int n = adj.size() - 1;
	for (int v = 1; v <= n; v++) {
		if (adj[u][v] && !visited[v]) {
			visited[v] = true;
			if (!edges[v] || dfs(edges[v], edges, visited, adj)) {
				edges[v] = u;
				return true;
			}
		}
	}
	return false;
}

void solve(vector<vector<bool> > &adj, vector<int> &res) {
	int n = adj.size() - 1;
	vector<int> edges(n + 1, 0);
	for (int u = 1; u <= n; u++) {
		vector<bool> visited(n + 1, 0);
		dfs(u, edges, visited, adj);
	}

	for (int i = 1; i <= n; i++)
		if (edges[i]) {
			res[edges[i]] = i;
		}
}



int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<vector<int> > g(k, vector<int> (n));
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				cin >> g[i][j];
			}
		}

		vector<vector<bool> > adj(n + 1, vector<bool> (n + 1, 1));
		for (int i = 0; i < k; i++)
			for (int j = 0; j < n; j++)
				for (int l = j; l >= 0; l--) {
					adj[g[i][j]][g[i][l]] = 0;
				}

		vector<int> res(n + 1, 0);
		solve(adj, res);
		unordered_set<int> s(res.begin(), res.end());
		cout << n - s.size() + 1 << endl;
		for (int i = 1; i <= n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}

	return 0;
}