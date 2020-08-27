#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n;
		map<int, unordered_set<int> > mp;
		unordered_set<int> s, pos;
		for (int i = 1; i <= n; i++) {
			s.insert(i);
		}
		for (int i = 0; i < n; i++) {
			cin >> k;
			bool flag = true;
			for (int j = 0; j < k; j++) {
				cin >> a;
				if (flag && s.find(a) != s.end()) {
					s.erase(a);
					flag = false;
				}
				mp[i + 1].insert(a);
			}
			if (flag) {
				pos.insert(i + 1);
			}
		}
		if (s.size() == 0) {
			cout << "OPTIMAL" << endl;
			continue;
		}
		bool flag = true;
		int x = -1, y = -1;
		for (auto &i : pos) {
			for (auto &j : s) {
				if (mp[i].find(j) == mp[i].end()) {
					x = i;
					y = j;
					flag = false;
				}
			}
			if (!flag) {
				break;
			}
		}
		if (!flag) {
			cout << "IMPROVE" << endl;
			cout << x << " " << y;
		} else {
			cout << "OPTIMAL";
		}
		cout << endl;
	}

	return 0;
}