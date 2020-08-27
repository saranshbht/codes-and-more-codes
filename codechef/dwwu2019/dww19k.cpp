#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		double den = 3.14159265358979 * n * 10;
		cout.precision(numeric_limits<double>::max_digits10);
		cout << sum / den << endl;
	}

	return 0;
}