#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	ll a, b, c;
	while (t--) {
		cin >> a >> b >> c;
		a--; c--;
		if (c < a) {
			swap(a, c);
		}
		ll count = 0;
		for (ll i = 1; i <= b; i++) {
			if (i * i >= a * c) {
				break;
			}
			if (c >= i && a >= i) {
				count = (count + (c - i + 1) * (a - i + 1) - 1) % M;
			}
			for (ll j = 1; j < i; j++) {
				ll x = (i * i) / j;
				if (x <= c) {
					count = (count + c - x) % M;
					if (x <= a) {
						count = (count + a - x) % M;
					}
				}
			}
		}
		cout << count << endl;
	}

	return 0;
}