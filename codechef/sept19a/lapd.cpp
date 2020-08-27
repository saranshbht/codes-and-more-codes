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
		ll count = 0;
		a--; c--;
		if (c < a) {
			swap(a, c);
		}
		for (ll i = 1; i <= b; i++) {
			if (i * i >= a * c) {
				break;
			}
			for (ll j = 1; j <= a; j++) {
				if (i * i >= j * c) {
					continue;
				}
				if (i * i < j) {
					count = (count + (a - j + 1) * c) % M;
					break;
				}
				ll x = (i * i) / j + 1;
				count = (count + c - x + 1) % M;
			}
		}
		cout << count << endl;
	}

	return 0;
}