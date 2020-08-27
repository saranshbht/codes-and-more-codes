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
	map<int, int> size_mp;
	for (int i = 1; i <= n; i++) {
		if (mp.find(i) != mp.end()) {
			size_mp[mp[i].size()]++;
		}
	}
	if (size_mp[1] == 2 && size_mp[2] == n - 2) {
		cout << "bus topology";
	} else if (size_mp[1] == n - 1 && size_mp[n - 1] == 1) {
		cout << "star topology";
	} else if (size_mp[2] == n) {
		cout << "ring topology";
	} else {
		cout << "unknown topology";
	}
	cout << "\n";
	return 0;
}