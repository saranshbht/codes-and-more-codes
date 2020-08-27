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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int i, surplus = 0;
		for (i = 0; i < n; i++) {
			if (arr[i] >= k) {
				surplus += arr[i] - k;
			} else {
				if (arr[i] + surplus < k) {
					break;
				} else {
					surplus -= k - arr[i];
				}
			}
		}
		if (i == n) {
			cout << "YES";
		} else {
			cout << "NO " << i + 1;
		}
		cout << endl;
	}

	return 0;
}