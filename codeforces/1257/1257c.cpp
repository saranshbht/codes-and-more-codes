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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (n == 1) {
			cout << -1;
		} else {
			int count[n + 1] {0};
			for (int i = 0; i < n; i++) {
				count[arr[i]]++;
			}
			vector<pair<int, int> > leastsub(n + 1, make_pair(INT_MAX, -1));
			for (int i = 0; i < n; i++) {
				if (leastsub[arr[i]].second == -1) {
					leastsub[arr[i]].second = i;
				} else {
					leastsub[arr[i]].first = min(leastsub[arr[i]].first, i - leastsub[arr[i]].second + 1);
					leastsub[arr[i]].second = i;
				}
			}
			int ans = INT_MAX;
			for (int i = 1; i <= n; i++) {
				ans = min(ans, leastsub[i].first);
			}
			if (ans == INT_MAX) {
				cout << -1;
			} else {
				cout << ans;
			}

		}
		cout << endl;
	}

	return 0;
}