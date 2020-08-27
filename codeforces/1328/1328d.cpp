#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, n;
	cin >> q;
	while (q--) {
		cin >> n;
		vector<int> t(n + 1);
		for (int i = 0; i < n; i++) {
			cin >> t[i];
		}
		t[n] = t[0];
		int j;
		for (j = 1; j <= n; j++)
			if (t[j] == t[j - 1]) {
				break;
			}
		vector<int> ans(n);
		int count;
		if (j == n + 1) {
			count = 2;
			ans[0] = 1;
			for (int i = 1; i < n - 1; i++) {
				ans[i] = 3 - ans[i - 1];
			}
			if (n & 1) {
				ans[n - 1] = 3;
				count = 3;
			}
		} else {
			count = 1;
			fill(ans.begin(), ans.end(), 1);
			for (int i = 1; i < n; i++) {
				if (t[i] != t[i - 1]) {
					ans[i] = 3 - ans[i - 1];
					count = 2;
				}
			}
		}
		cout << count << endl;
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;

	}

	return 0;
}