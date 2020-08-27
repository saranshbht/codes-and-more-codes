#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

void dfs(int i, vector<vector<int> > &graph, vector<bool> &visited) {
	visited[i] = true;
	for (auto &j : graph[i]) {
		if (!visited[j]) {
			dfs(j, graph, visited);
		}
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		vector<vector<int> > graph(n, vector<int>());
		int a, b;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			graph[a - 1].push_back(b - 1);
			graph[b - 1].push_back(a - 1);
		}

		vector<bool> visited(n, false);
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (!visited[i]) {
				dfs(i, graph, visited);
				count++;
			}
		}
		cout << (--count << 1) << " " << 0 << endl;
	}

	return 0;
}