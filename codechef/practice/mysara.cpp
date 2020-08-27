#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)(1e9 + 7)

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
		int x = 1;
		for (; x < n; x++)
			if (arr[x] < arr[x - 1]) {
				break;
			}
		if (x != n) {
			cout << 0 << endl;
			continue;
		}
		long long ans = 1, res;
		for (int i = 1; i < n; i++) {
			res = arr[i - 1] & arr[i];
			ans = (ans * ((1 << __builtin_popcount(res)) % M)) % M;
			// cout << ans << endl;
		}
		cout << ans << endl;
	}

	return 0;
}