#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	// cin >> t;
	t = 100;
	while (t--) {
		// cin >> n;
		n = 100 - t;
		double a = sqrt(n);
		int next = ceil(a) * ceil(a);
		int diff = next - n;
		int arr[10];
		while (next <= 81 * n) {
			for (int i = 0; i < 10; i++) {
				arr[i] = 0;
			}
			//cout << next << endl;
			if (diff >= 80) {
				arr[9] = diff / 80;
				diff %= 80;
			}
			if (diff >= 63) {
				arr[8] = diff / 63;
				diff %= 63;
			}
			if (diff >= 48) {
				arr[7] = diff / 48;
				diff %= 48;
			}
			if (diff >= 35) {
				arr[6] = diff / 35;
				diff %= 35;
			}
			if (diff >= 24) {
				arr[5] = diff / 24;
				diff %= 24;
			}
			if (diff >= 15) {
				arr[4] = diff / 15;
				diff %= 15;
			}
			if (diff >= 8) {
				arr[3] = diff / 8;
				diff %= 8;
			}
			if (diff >= 3) {
				arr[2] = diff / 3;
				diff %= 3;
			}
			if (diff == 0) {
				int sum = 0;
				for (int i = 0; i < 10; i++) {
					sum += arr[i];
				}
				if (sum <= n) {
					break;
				}
			}
			a = a + 1;
			next = ceil(a) * ceil(a);
			diff = next - n;
		}
		if (next > 81 * n) {
			cout << -1 << endl;
			continue;
		}
		cout << n << " ";
		int sum = 0;
		for (int i = 0; i < 10; i++) {
			sum += arr[i];
		}
		arr[1] = n - sum;
		for (int i = 1; i < 10; i++) {
			for (int j = 0; j < arr[i]; j++) {
				cout << i;
			}
		}
		cout << endl;
	}

	return 0;
}