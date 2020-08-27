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
		vector<bool> peak(n, false);
		for (int i = 1; i < n - 1; i++)
			if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
				peak[i] = true;
			}
		vector<int> cnt(n, 0);
		for (int i = 1; i < n; i++) {
			cnt[i] = cnt[i - 1] + peak[i];
		}

	}

	return 0;
}