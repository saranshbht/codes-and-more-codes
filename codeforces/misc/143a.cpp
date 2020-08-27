#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int r1, r2, c1, c2, d1, d2, a, b, c, d;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int i;
	for (i = 1; i <= 9; i++) {
		a = i;
		b = r1 - a;
		c = c1 - a;
		d = c2 - b;
		if ((a != b) && (a != c) && (a != d) && (b != c) && (b != d) && (c != d) && (a + b == r1) && (c + d == r2) && (a + d == d1) && (b + c == d2) && (a + c == c1) && (b + d == c2) && (a >= 1 && a <= 9) && (b >= 1 && b <= 9) && (c >= 1 && c <= 9) && (d >= 1 && d <= 9)) {
			break;
		}
	}
	if (i != 10) {
		cout << a << " " << b << "\n" << c << " " << d;
	} else {
		cout << "-1";
	}
	cout << endl;
	return 0;
}