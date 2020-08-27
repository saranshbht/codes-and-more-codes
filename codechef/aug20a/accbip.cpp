#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, c, k;
	cin >> t;
	while (t--) {
		cin >> n >> c >> k;
		vector<vector<pair<int, int> > > pts(c);
		vector<int> v(c);
		for (int i = 0; i < n; i++) {
			int a, b, c_idx;
			cin >> a >> b >> c_idx;
			pts[c_idx - 1].push_back({a, b});
		}
		for (int i = 0; i < c; i++) {
			cin >> v[i];
		}
		if (v[0] == 0) {
			cout << 0 << endl;
			continue;
		}

		int num = k / v[0];
		priority_queue<int> sizes;
		for (int i = 0; i < c; i++) {
			sizes.push(pts[i].size());
		}

		vector<long long> arr(n, 0);
		for (int i = 1; i < n; i++) {
			arr[i] = arr[i - 1] + i * (i + 1) / 2;
		}

		while (num) {
			int val = sizes.top();
			sizes.pop();
			sizes.push(val - 1);
			num--;
		}
		long long total = 0;

		while (!sizes.empty()) {
			int val = sizes.top();
			sizes.pop();
			if (val >= 3) {
				total += arr[val - 2];
			}
		}
		cout << total << endl;
	}

	return 0;
}