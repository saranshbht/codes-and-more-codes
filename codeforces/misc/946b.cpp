#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n, m;
	cin >> n >> m;
	while (1) {
		if (n == 0 || m == 0) {
			break;
		} else if (n >= 2 * m) {
			n %= 2 * m;
		} else if (m >= 2 * n) {
			m %= 2 * n;
		} else {
			break;
		}
	}
	cout << n << " " << m << endl;
	return 0;
}