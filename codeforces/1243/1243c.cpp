#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
bool isPrime(ll n) {
	for (ll i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	} else if (isPrime(n)) {
		cout << n;
	} else {
		vector<ll> v;
		if (n % 2 == 0) {
			v.push_back(2);
			while (n % 2 == 0) {
				n >>= 1;
			}
		}
		for (ll i = 3; i * i <= n; i += 2) {
			if (n % i == 0) {
				v.push_back(i);
				while (n % i == 0) {
					n /= i;
				}
			}
		}
		if (n > 2) {
			v.push_back(n);
		}
		if (v.size() == 1) {
			cout << v[0];
		} else {
			cout << 1;
		}
	}
	cout << endl;
	return 0;
}