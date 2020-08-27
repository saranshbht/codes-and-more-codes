#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, p;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int odd = 0, even = 0;
		for (int i = 0; i < n; i++) {
			if (__builtin_popcount(arr[i]) & 1) {
				odd++;
			} else {
				even++;
			}
		}
		while (q--) {
			cin >> p;
			int setBits = __builtin_popcount(p);
			if (setBits & 1) {
				cout << odd << " " << even;
			} else {
				cout << even << " " << odd;
			}
			cout << endl;
		}
	}

	return 0;
}