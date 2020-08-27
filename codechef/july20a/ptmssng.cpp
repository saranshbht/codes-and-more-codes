#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, x, y;
	cin >> t;
	while (t--) {
		cin >> n;
		int xor_x = 0, xor_y = 0;
		for (int i = 1; i < 4 * n; i++) {
			cin >> x >> y;
			xor_x ^= x;
			xor_y ^= y;
		}
		cout << xor_x << " " << xor_y << endl;
	}

	return 0;
}