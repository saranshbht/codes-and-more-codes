#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, p;
	cin >> t;
	while (t--) {
		cin >> n >> k >> p;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if (k & 1) {
			if (p == 0) {
				cout << *max_element(arr, arr + n);
			} else {
				cout << *min_element(arr, arr + n);
			}
		} else {
			if (p == 0) {
				int closeMax = arr[1];
				for (int i = 1; i < n - 1; i++) {
					closeMax = max(closeMax, min(arr[i - 1], arr[i + 1]));
				}
				closeMax = max(closeMax, arr[n - 2]);
				cout << closeMax;
			} else {
				int closeMin = arr[1];
				for (int i = 1; i < n - 1; i++) {
					closeMin = min(closeMin, max(arr[i - 1], arr[i + 1]));
				}
				closeMin = min(closeMin, arr[n - 2]);
				cout << closeMin;
			}
		}
		cout << endl;
	}

	return 0;
}