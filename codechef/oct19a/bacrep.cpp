#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
set<int> vec[500001];
void dfs(set<int> *v, int node, int parent) {
	v[node].erase(parent);
	for (auto it = v[node].begin(); it != v[node].end(); it++) {
		dfs(v, *it, node);
	}
}
void levelOrder(vector<int> &level, vector<int> &parent, set<int> *v, ll *bac) {
	int n = level.size() - 1;
	for (int i = 0; i < n; i++) {
		if (v[level[i]].size() == 0) {
			bac[level[i]] += bac[parent[level[i]]];
		} else {
			bac[level[i]] = bac[parent[level[i]]];
		}
	}
	bac[1] = 0;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, x, y, v, k;
	char c;
	cin >> n >> q;

	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		vec[x].insert(y);
		vec[y].insert(x);
	}

	dfs(vec, 1, 0);
	vector<int> parent(n + 1);
	for (int i = 1; i <= n; i++) {
		for (auto it = vec[i].begin(); it != vec[i].end(); it++) {
			parent[*it] = i;
		}
	}
	// for(auto it = parent.begin(); it != parent.end(); it++){
	//     cout << *it << endl;
	// }
	vector<int> level;
	queue<int> qu;
	qu.push(1);
	while (!qu.empty()) {
		int x = qu.front();
		level.push_back(x);
		for (auto it = vec[x].begin(); it != vec[x].end(); it++) {
			qu.push(*it);
		}
		qu.pop();
	}
	reverse(level.begin(), level.end());
	ll bac[n + 1] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> bac[i];
	}
	for (int i = 0; i < q; i++) {
		levelOrder(level, parent, vec, bac);
		cin >> c;
		if (c == '+') {
			cin >> v >> k;
			bac[v] += k;
		} else {
			cin >> v;
			cout << bac[v] << endl;
		}
		// for(int i = 1; i <= n; i++){
		//     cout << bac[i] << " ";
		// }
		// cout << endl;
	}
	return 0;
}