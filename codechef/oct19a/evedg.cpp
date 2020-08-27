#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, u, v;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[n + 1] = {0};
		cin >> u >> v;
		pair<int, int> p(u, v);
		arr[u]++; arr[v]++;
		for (int i = 1; i < m; i++) {
			cin >> u >> v;
			arr[u]++;
			arr[v]++;
		}
		if (m & 1) {
			int i;
			for (i = 1; i <= n; i++) {
				if (arr[i] & 1) {
					break;
				}
			}
			if (i != n + 1) {
				cout << 2 << endl;
				for (int j = 1; j <= n; j++) {
					if (j == i) {
						cout << 2 << " ";
					} else {
						cout << 1 << " ";
					}
				}
			} else {
				cout << 3 << endl;
				for (int j = 1; j <= n; j++) {
					if (j == p.first) {
						cout << 2 << " ";
					} else if (j == p.second) {
						cout << 3 << " ";
					} else {
						cout << 1 << " ";
					}
				}
			}
		} else {
			cout << 1 << endl;
			for (int i = 0; i < n; i++) {
				cout << 1 << " ";
			}
		}
		cout << endl;
	}

	return 0;
}