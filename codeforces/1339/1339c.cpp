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
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int lastMax = a[0];
		int maxm = 0;
		for (int i = 1; i < n; i++) {
			if (a[i] < lastMax) {
				maxm = max(maxm, lastMax - a[i]);
			} else {
				lastMax = a[i];
			}
		}
		// cout << maxm << endl;
		int ans = 0;
		while (maxm) {
			maxm >>= 1;
			ans++;
		}
		cout << ans << endl;
	}


	return 0;
}