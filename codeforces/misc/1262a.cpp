#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}
		int minm = INT_MAX, maxm = INT_MIN;
		for (int i = 0; i < n; i++) {
			minm = min(minm, v[i].second);
			maxm = max(maxm, v[i].first);
		}
		int k = maxm - minm;
		if (k > 0) {
			cout << k;
		} else {
			cout << 0;
		}
		cout << endl;
	}

	return 0;
}