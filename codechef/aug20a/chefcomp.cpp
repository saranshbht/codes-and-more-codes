#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<int> a, b, d;
vector<bool> done;

void dfs(int v, int p, vector<vector<int> > &graph, int pop, int day) {
	b[v] -= min(pop, b[v]);
	// cout << v << " " << b[v] << endl;
	if (b[v] == 0 && d[v] == -1) {
		d[v] = day;
		// cout << d[v] << endl;
	}
	for (auto &i : graph[v]) {
		if (!done[i] && i != p) {
			dfs(i, v, graph, pop, day);
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<vector<int> > graph(n + 1);
		vector<int> p(n + 1);
		d = vector<int>(n + 1, -1);
		a = vector<int>(n + 1);
		b = vector<int>(n + 1);
		done = vector<bool>(n + 1, false);
		int u, v;

		for (int i = 1; i < n; i++) {
			cin >> u >> v;
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		for (int i = 1; i <= n; i++) {
			cin >> p[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
		}

		for (int i = 1; i <= n; i++) {
			dfs(p[i], 0, graph, a[p[i]], i);
			done[p[i]] = true;
		}
		for (int i = 1; i <= n; i++) {
			cout << d[i] << " ";
		}
		cout << endl;
	}

	return 0;
}