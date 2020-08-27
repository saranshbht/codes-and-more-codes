#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
bool compare(pair<int, int> &a, pair<int, int> &b) {
	return (a.first - a.second) > (b.first - b.second);
}

int cnt[200001];

void numNodes(int v, int p, vector<vector<int> > &graph) {
	cnt[v] = 1;
	for (auto &i : graph[v]) {
		if (i == p) {
			continue;
		}
		numNodes(i, v, graph);
		cnt[v] += cnt[i];
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	vector<vector<int> > v(n + 1);
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	numNodes(1, 0, v);
	// for(int i = 1; i <= n; i++){
	//     cout << cnt[i] << " ";
	// }
	// cout << endl;
	vector<pair<int, int> > vec(n + 1);

	for (int i = 1; i <= n; i++) {
		// vec[i].first = i;
		vec[i].second = cnt[i];
	}
	deque<int> q;
	q.push_back(1);
	vector<bool> visited(n + 1, false);
	visited[1] = true;
	int level = 0;
	vec[1].first = 0;
	while (!q.empty()) {
		int x = q.front();
		for (auto &i : v[x]) {
			if (!visited[i]) {
				vec[i].first = vec[x].first + 1;
				q.push_back(i);
				visited[i] = true;
			}
		}
		q.pop_front();
	}
	// cout << endl;
	// for(auto &i : vec){
	//     cout << i.first << endl;
	//     cout << i.first << " " << i.second << endl;
	// }
	// cout << endl;
	sort(vec.begin() + 1, vec.end(), compare);
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		ans += vec[i].first - (vec[i].second - 1);
	}

	cout << ans << endl;

	return 0;
}