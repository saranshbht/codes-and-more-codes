#include<bits/stdc++.h>
using namespace std;

int main() {
	// ios_base :: sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);

	int t, n, m, q, k, h;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k >> q;
		vector<pair<int, int> > queries(q);
		vector<int> ans(q, INT_MIN);
		for (int i = 0; i < q; i++) {
			cin >> queries[i].first >> queries[i].second;
		}
		if (k == 100) {
			for (int i = 0; i < q; i++) {
				for (int j = 1; j <= 10; j++) {
					cout << 1 << " " << queries[i].first << " " << queries[i].second << " " << j * (m / 11) << endl;
					cin >> h;
					if (h < 0) {
						return 0;
					}
					ans[i] = max(ans[i], h);
				}
			}
		} else if (k == 10) {
			for (int i = 0; i < q; i++) {
				cout << 1 << " " << queries[i].first << " " << queries[i].second << " " << m / 2 << endl;
				cin >> h;
				if (h < 0) {
					return 0;
				}
				ans[i] = h;
			}
		} else if (k == 3) {
			cout << 1 << " " << 1 << " " << n << " " << m / 2 << endl;
			cin >> h;
			if (h < 0) {
				return 0;
			}
			for (int i = 0; i < q; i++) {
				ans[i] = h;
			}
		}
		cout << 2 << " ";
		for (int i = 0; i < q; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
		cin >> h;
		if (h < 0) {
			return 0;
		}
	}

	return 0;
}