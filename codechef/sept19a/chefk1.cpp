#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	ll n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n == 1) {
			if (m == 0) {
				cout << 0;
			} else if (m == 1) {
				cout << 1;
			} else {
				cout << -1;
			}
			cout << endl;
			continue;
		} else if (n == 2) {
			if (m == 1) {
				cout << 1;
			} else if (m == 2 || m == 3) {
				cout << 2;
			} else {
				cout << -1;
			}
			cout << endl;
			continue;
		}
		ll temp = n * (n + 1) / 2;
		if (m < n - 1 || m > temp) {
			cout << -1;
		} else if (m <= n + 1) {
			cout << 2;
		} else if (m <= 2 * n) {
			cout << 3;
		} else {
			m -= 2 * n;
			if (n & 1) {
				ll toAdd;
				if (m % n) {
					toAdd = m / n + 1;
				} else {
					toAdd = m / n;
				}
				m %= n;
				toAdd *= 2;
				if (m != 0 && m <= n / 2) {
					toAdd--;
				}
				cout << 3 + toAdd;
			} else {
				if (m % (n / 2)) {
					cout << 3 + m / (n / 2) + 1;
				} else {
					cout << 3 + m / (n / 2);
				}

			}
		}
		cout << endl;
	}
	return 0;
}