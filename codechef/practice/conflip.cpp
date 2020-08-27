#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, g, i, n, q;
	cin >> t;
	while (t--) {
		cin >> g;
		while (g--) {
			cin >> i >> n >> q;
			if ((n & 1) && (i != q)) {
				cout << n / 2 + 1;
			} else {
				cout << n / 2;
			}
			cout << endl;
		}
	}

	return 0;
}