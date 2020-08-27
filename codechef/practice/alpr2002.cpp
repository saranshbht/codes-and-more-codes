#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int x[n], y[n];
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> y[i];
		}
		sort(x, x + n);
		sort(y, y + n);
		int xslope = x[1] - x[0];
		int yslope = y[1] - y[0];
		xslope = xslope / __gcd(xslope, yslope);
		yslope = yslope / __gcd(xslope, yslope);
		int i, xs, ys;
		for (i = 2; i < n; i++) {
			xs = x[i] - x[i - 1];
			ys = y[i] - y[i - 1];
			xs = xs / __gcd(xs, ys);
			ys = ys / __gcd(xs, ys);
			if (xs != xslope || ys != yslope) {
				break;
			}
		}
		if (i != n) {
			cout << 0;
		} else {
			cout << 2;
		}
		cout << endl;
	}

	return 0;
}