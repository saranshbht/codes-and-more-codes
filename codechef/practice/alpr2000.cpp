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
		int ans = n / 2 + n / 2 * (k + 1);
		if (n & 1) {
			ans += 2 * k + 1;
		}
		cout << ans << endl;
	}

	return 0;
}