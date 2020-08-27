#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n;
	cin >> n;
	if (n & 1) {
		ll i;
		for (i = 3; i * i <= n; i += 2)
			if (n % i == 0) {
				break;
			}
		if (i * i > n) {
			n = 0;
		} else {
			n -= i;
		}
		cout << n / 2 + 1;
	} else {
		cout << n / 2;
	}
	cout << endl;
	return 0;
}