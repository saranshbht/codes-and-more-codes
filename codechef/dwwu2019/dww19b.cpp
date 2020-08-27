#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	ll k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ll a;
		ll minm = __LONG_LONG_MAX__;
		for (int i = 0; i < n; i++) {
			cin >> a;
			ll g = a / __gcd(a, k);
			if (a > 1e18 / g) {
				continue;
			}
			minm = min(minm, k * g);
		}
		if (minm == __LONG_LONG_MAX__) {
			cout << -1;
		} else {
			cout << minm;
		}
		cout << endl;

	}

	return 0;
}