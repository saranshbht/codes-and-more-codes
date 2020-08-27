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
		cin >> n >> m;

		vector<pair<int, int> > v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first;
			v[i].second = i + 1;
		}
		if (n == 2 || m < n) {
			cout << -1 << endl;
			continue;
		}
		sort(v.begin(), v.end());
		long long sum = 0;
		int times = m - (n - 1);
		sum += times * (v[0].first + v[1].first);
		sum += v[0].first + v[n - 1].first;
		for (int i = 2; i < n; i++) {
			sum += v[i].first + v[i - 1].first;
		}
		cout << sum << endl;
		for (int i = 0; i < times; i++) {
			cout << v[0].second << " " << v[1].second << endl;
		}
		for (int i = 2; i < n; i++) {
			cout << v[i - 1].second << " " << v[i].second << endl;
		}
		cout << v[n - 1].second << " " << v[0].second << endl;
	}

	return 0;
}