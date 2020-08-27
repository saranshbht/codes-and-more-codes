#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// ios_base :: sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);

	int t, n, res;
	ll s, a, b, d;
	cin >> t;
	while (t--) {
		cin >> n >> a;
		s = 1;
		for (int i = 0; i < n; i++) {
			s *= 10;
		}
		ll _10n = s;
		s *= 2;
		s += a;
		cout << s << endl;
		cin >> b;
		cout << _10n - b << endl;
		cin >> d;
		cout << _10n - d << endl;
		cin >> res;
		if (res == -1) {
			return 0;
		}
	}

	return 0;
}