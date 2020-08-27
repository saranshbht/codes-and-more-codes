#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int sum = 0;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		sort(arr, arr + n);
		int firstk = 0;
		int lastk = 0;
		for (int i = 0; i < k; i++) {
			firstk += arr[i];
			lastk += arr[n - 1 - i];
		}
		cout << max(abs(sum - 2 * firstk), abs(sum - 2 * lastk)) << endl;
	}

	return 0;
}