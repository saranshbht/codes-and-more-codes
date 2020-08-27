#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		map<int, int> mp;
		vector<int> mines;
		int cnt = 0;
		int maxm = INT_MIN, minm = INT_MAX;
		for (int i = 0; i < n / 2; i++) {
			mp[a[i] + a[n - i - 1]]++;
			int minimum = min(a[i], a[n - i - 1]);
			if (minimum > k) {
				minimum = k;
				cnt++;
			}
			maxm = max(maxm, minimum);
			minm = min(minm, minimum);
		}
		cout << minm << " " << maxm << endl;
		int minimum = INT_MAX;
		for (int i = minm + 1; i <= maxm + k; i++) {
			minimum = min(minimum, n / 2 - mp[i]);
		}
		cout << cnt + minimum << endl;
	}

	return 0;
}