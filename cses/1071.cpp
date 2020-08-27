#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, y, x;
	cin >> t;
	while (t--) {
		cin >> y >> x;
		long long ans;
		if (y > x) {
			if (y & 1) {
				ans = 1ll * (y - 1) * (y - 1) + x;
			} else {
				ans = 1ll * y * y - x + 1;
			}
		} else {
			if (x & 1) {
				ans = 1ll * x * x - y + 1;
			} else {
				ans = 1ll * (x - 1) * (x - 1) + y;
			}
		}
		cout << ans << endl;
	}

	return 0;
}