#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		ll brr[n + 1] = {0};
		ll arr[n + 1] = {0};
		for (int i = 0; i < n - 1; i++) {
			cin >> brr[i];
		}
		for (int i = 0; i < n - 1; i += 2) {
			arr[0] += brr[i];
			arr[1] += brr[i + 1];
		}
		for (int i = 2; i < n; i += 2) {
			arr[i] = arr[i - 2] - brr[i - 2];
			arr[i + 1] = arr[i - 1] - brr[i - 1];
		}

		// for(int i = 0; i <= n; i++){
		//     cout << arr[i] << endl;
		// }
		while (q--) {
			cin >> x >> y;
			if ((x & 1) == (y & 1)) {
				cout << "UNKNOWN";
			} else {
				cout << arr[x - 1]  - arr[x] + arr[y - 1] - arr[y];
			}
			cout << endl;
		}
	}

	return 0;
}