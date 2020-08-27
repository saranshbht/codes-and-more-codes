#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if (n & 1) {
			int i;
			for (i = 3; i * i <= n; i += 2) {
				if (n % i == 0) {
					break;
				}
			}
			if (i * i <= n) {
				n += i;
			} else {
				n += n;
			}
			cout << n + 1ll * 2 * (k - 1);
		} else {
			cout << n + 1ll * 2 * k;
		}
		cout << endl;
	}

	return 0;
}