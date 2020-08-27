#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i] >> b[i];
		}
		int lastdiff = -1, i;
		for (i = 0; i < n; i++) {
			if (a[i] - b[i] < 0 || a[i] - b[i] < lastdiff) {
				break;
			} else if (i > 0 && (a[i] < a[i - 1] || b[i] < b[i - 1])) {
				break;
			}
			lastdiff = a[i] - b[i];
		}
		if (i != n) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}