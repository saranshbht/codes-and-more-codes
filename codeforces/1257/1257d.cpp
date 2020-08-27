#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n;
		int monsters[n];
		for (int i = 0; i < n; i++) {
			cin >> monsters[i];
		}
		cin >> m;
		vector<pair<int, int> > heroes(m);
		for (int i = 0; i < m; i++) {
			cin >> heroes[i].first >> heroes[i].second;
		}

	}

	return 0;
}