#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int f[n], p[n];
		for (int i = 0; i < n; i++) {
			cin >> f[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		int cost[m + 1];
		for (int i = 0; i <= m; i++) {
			cost[i] = -1;
		}
		for (int i = 0; i < n; i++) {
			if (cost[f[i]] == -1) {
				cost[f[i]] = p[i];
			} else {
				cost[f[i]] += p[i];
			}
		}
		// for(int i = 0; i <= m; i++)
		//     cout << cost[i] << " ";
		// cout << endl;
		int minm = INT_MAX;
		for (int i = 1; i <= m; i++)
			if (cost[i] != -1) {
				minm = min(minm, cost[i]);
			}
		cout << minm << endl;
	}

	return 0;
}