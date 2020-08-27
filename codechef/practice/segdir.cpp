#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, l, r, v;
	cin >> t;
	while (t--) {
		cin >> n;
		map<int, vector<pair<int, int> > > mp;
		for (int i = 0; i < n; i++) {
			cin >> l >> r >> v;
			mp[v].push_back(make_pair(l, r));
		}
		if (n < 3) {
			cout << "YES" << endl;
			continue;
		}
		for (auto it = mp.begin(); it != mp.end(); it++)
			sort(mp[it->first].begin(), mp[it->first].end());
		bool flag = true;
		for (auto &it : mp) {
			int n = mp[it.first].size();
			if (n < 3)
				continue;
			for (int i = 0; i < n - 2; i++) {
				for (int j = i + 1; j < n - 1; j++) {
					for (int k = j + 1; k < n; k++) {
						if (mp[it.first][j].first <= mp[it.first][i].second && mp[it.first][j].second >= mp[it.first][k].first) {
							flag = false;
							break;
						}
					}
					if (!flag)
						break;
				}
				if (!flag)
					break;
			}
			if (!flag)
				break;
		}
		if (!flag)
			cout << "NO";
		else
			cout << "YES";
		cout << endl;
	}

	return 0;
}