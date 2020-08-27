#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int i = 0;
		long long total = 0;
		while (i < n && a[i] < x) {
			total += x - a[i];
			i++;
		}
		// cout << total << endl;
		long long total2 = 0;
		for (; i < n; i++) {
			total2 += a[i] - x;
		}
		// cout << total2 - total << endl;
		if (total2 >= total) {
			cout << n;
		} else {
			long long diff = total - total2;
			// cout << diff << endl;
			int i;
			for (i = 0; i < n; i++) {
				// cout << "hi";
				diff -= x - a[i];
				if (diff <= 0) {
					break;
				}
			}
			cout << n - i - 1;

		}
		cout << endl;


	}

	return 0;
}