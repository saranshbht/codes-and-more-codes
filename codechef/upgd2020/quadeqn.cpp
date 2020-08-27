#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;
		int d = b * b - 4 * a * c;
		if (d < 0) {
			cout << "No REAL roots found";
		} else {
			double r1 = (-b + sqrt((double)d)) / (2 * a);
			double r2 = (-b - sqrt((double)d)) / (2 * a);
			if (r1 < r2)
				swap(r1, r2);
			cout.precision(17);
			cout << fixed << r1 << " " << r2;
		}
		cout << endl;
	}

	return 0;
}