#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, u, v;
	cin >> n >> m;
	map<int, set<int> > mp;
	while (m--) {
		cin >> u >> v;
		mp[u].insert(v);
		mp[v].insert(u);
	}
	int sum = 0;
	while (true) {
		int count = 0;
		map<int, int> int_mp;
		for (int i = 1; i <= n; i++) {
			if (mp.find(i) != mp.end()) {
				if (mp[i].size() == 1) {
					count++;
					int_mp[i] = *mp[i].begin();
					mp.erase(i);
				}
			}
		}
		for (auto &i : int_mp) {
			mp[i.second].erase(i.first);
		}
		if (count) {
			sum++;
		} else {
			break;
		}
		// cout << count << endl;
	}
	cout << sum << endl;
	return 0;
}