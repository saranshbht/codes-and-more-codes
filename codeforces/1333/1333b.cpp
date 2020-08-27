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
		int arr[n], brr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> brr[i];
		}
		bool minus = false, plus = false;
		if (arr[0] != brr[0]) {
			cout << "NO" << endl;
			continue;
		}
		if (arr[0] == 1) {
			plus = true;
		} else if (arr[0] == -1) {
			minus = true;
		}
		int i;
		for (i = 1; i < n; i++) {
			if ((arr[i] < brr[i]) && !plus) {
				break;
			}
			if ((arr[i] > brr[i]) && !minus) {
				break;
			}
			if (arr[i] == 1) {
				plus++;
			} else if (arr[i] == -1) {
				minus = true;
			}
			if (plus && minus) {
				i = n;
				break;
			}
		}
		// cout << i << endl;
		if (i != n) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}