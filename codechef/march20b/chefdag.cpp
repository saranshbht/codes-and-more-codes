#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
map<int, vector<int> > mp;
bool compare(int k1, int k2) {
	return mp[k1].size() < mp[k2].size();
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		mp.clear();
		vector<vector<int> > g(k, vector<int> (n));
		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				cin >> g[i][j];
			}
		}

		vector<vector<int> > adj(n + 1, vector<int> (n + 1, 0));
		for (int i = 0; i < k; i++)
			for (int j = 0; j < n; j++)
				for (int l = j; l >= 0; l--) {
					adj[g[i][j]][g[i][l]]--;
				}



		set<int> nodes;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (!adj[i][j]) {
					mp[i].push_back(j);
					nodes.insert(j);
				}
			}
		}

		int minIndeg = n - nodes.size();
		vector<int> idx;
		for (auto &i : mp) {
			idx.push_back(i.first);
		}
		sort(idx.begin(), idx.end(), compare);

		vector<int> res(n + 1, 0);
		for (auto &i : idx) {
			for (auto &j : mp[i]) {
				if (nodes.find(j) != nodes.end()) {
					res[i] = j;
					nodes.erase(j);
					break;
				}
			}
		}

		cout << minIndeg + nodes.size() << endl;
		for (int i = 1; i <= n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}

	return 0;
}