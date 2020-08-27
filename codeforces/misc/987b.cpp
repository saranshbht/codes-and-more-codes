#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, y;
	cin >> x >> y;
	if (x == y) {
		cout << "=";
	} else {
		double a, b;
		a = y * log(x);
		b = x * log(y);
		if (a > b) {
			cout << ">";
		} else if (b > a) {
			cout << "<";
		} else {
			cout << "=";
		}
	}
	cout << endl;
	return 0;
}