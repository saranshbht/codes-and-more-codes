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
		if ((n / 2) & 1) {
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		for (int i = 1; i <= n / 2; i++) {
			cout << 2 * i << " ";
		}
		for (int i = 1; i < n / 2; i++) {
			cout << 2 * i - 1 << " ";
		}
		cout << n - 1 + n / 2 << endl;
	}

	return 0;
}