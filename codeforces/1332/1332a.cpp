#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		int x, y, x1, x2, y1, y2;
		cin >> x >> y >> x1 >> y1 >> x2 >> y2;
		int xdiff = abs(a - b);
		int ydiff = abs(c - d);
		if (((a != 0 || b != 0) && (x1 == x2)) || ((c != 0 || d != 0) && (y1 == y2))) {
			cout << "NO";
			cout << endl;
			continue;
		}
		int xfinal = x, yfinal = y;
		if (a > b) {
			xfinal -= xdiff;
		} else {
			xfinal += xdiff;
		}
		if (c > d) {
			yfinal -= ydiff;
		} else {
			yfinal += ydiff;
		}
		if (xfinal >= x1 && xfinal <= x2 && yfinal >= y1 && yfinal <= y2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}