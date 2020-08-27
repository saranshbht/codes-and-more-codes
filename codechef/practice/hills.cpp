#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, u, d, i, para = 0;
		cin >> n >> u >> d;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (i = 1; i < n; i++) {
			if (arr[i] == arr[i - 1]) {
				continue;
			}
			if (arr[i] > arr[i - 1]) {
				if (arr[i] - arr[i - 1] <= u) {
					continue;
				} else {
					break;
				}
			}
			if (arr[i - 1] - arr[i] <= d) {
				continue;
			} else {
				if (para == 0) {
					para++;
					continue;
				} else {
					break;
				}
			}
		}
		cout << i << "\n";
	}
	return 0;
}