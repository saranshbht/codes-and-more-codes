#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long u, v;
	cin >> u >> v;
	if (u > v) {
		cout << -1 << endl;
	} else if (u == v) {
		if (u == 0) {
			cout << 0 << endl;
		} else {
			cout << 1 << endl;
			cout << u << endl;
		}
	} else {
		long long k = v - u;
		if (k & 1) {
			cout << -1 << endl;
			return 0;
		}
		k >>= 1;
		if (k & u) {
			cout << 3 << endl;
			cout << u << " " << k << " " << k << endl;
		} else {
			cout << 2 << endl;
			cout << k << " " << (u ^ k) << endl;
		}
	}
	return 0;
}