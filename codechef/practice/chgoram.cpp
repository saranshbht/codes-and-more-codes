#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, p1, p2, p3, u, v;
	cin >> t;
	while (t--) {
		unordered_map<int, vector<int> > mp;
		cin >> n >> p1 >> p2 >> p3;
		for (int i = 1; i < n; i++) {
			cin >> u >> v;
			mp[u].push_back(v);
			mp[v].push_back(u);
		}
		int countTriplets = 0;
		if (p1 == 1) {
			if (p2 == 2 && p3 == 3) {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] > i) {
							for (int k = 0; k < mp[mp[i][j]].size(); k++)
								if (mp[mp[i][j]][k] > j && mp[mp[i][j]][k] > i) {
									countTriplets++;
								}
						}

					}
				}
			} else {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] > i) {
							for (int k = 0; k < mp[mp[i][j]].size() ; k++)
								if (mp[mp[i][j]][k] < j && mp[mp[i][j]][k] > i) {
									countTriplets++;
								}
						}

					}
				}
			}
		} else if (p2 == 1) {
			if (p1 == 2 && p3 == 3) {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] < i) {
							for (int k = 0; k < mp[mp[i][j]].size(); k++)
								if (mp[mp[i][j]][k] > j && mp[mp[i][j]][k] > i) {
									countTriplets++;
								}
						}

					}
				}
			} else {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] < i) {
							for (int k = 0; k < mp[mp[i][j]].size(); k++)
								if (mp[mp[i][j]][k] > j && mp[mp[i][j]][k] < i) {
									countTriplets++;
								}
						}
					}
				}
			}
		} else {
			if (p1 == 2 && p2 == 3) {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] > i) {
							for (int k = 0; k < mp[mp[i][j]].size(); k++)
								if (mp[mp[i][j]][k] < j && mp[mp[i][j]][k] < i) {
									countTriplets++;
								}
						}
					}
				}
			} else {
				for (int i = 1; i <= n; i++) {
					for (int j = 0; j < mp[i].size(); j++) {
						if (mp[i][j] < i) {
							for (int k = 0; k < mp[mp[i][j]].size() ; k++)
								if (mp[mp[i][j]][k] < j && mp[mp[i][j]][k] < i) {
									countTriplets++;
								}
						}
					}
				}
			}
		}
		cout << countTriplets << endl;
	}
	return 0;
}