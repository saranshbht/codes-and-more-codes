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
		sort(arr, arr + n);
		int m = n / 4;
		if (arr[n - m] == arr[n - m - 1] || arr[n - 2 * m] == arr[n - 2 * m - 1] || arr[n - 3 * m] == arr[n - 3 * m - 1]) {
			cout << -1;
		} else {
			cout << arr[n - 3 * m] << " " <<  arr[n - 2 * m] << " " << arr[n - m];
		}
		cout << endl;
	}

	return 0;
}