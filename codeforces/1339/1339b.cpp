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
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a, a + n);
		int res[n];
		res[0] = a[n / 2];
		int k = 1;
		for (int i = n / 2 - 1; i >= 0; i--) {
			res[k] = a[i];
			k += 2;
		}
		k = 2;
		for (int i = n / 2 + 1; i < n; i++) {
			res[k] = a[i];
			k += 2;
		}
		for (int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}

	return 0;
}