#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> c >> d;
		int min = a - b;
		int max = a + b;
		int minTotal = c - d;
		int maxTotal = c + d;
		if (min * n > maxTotal || max * n < minTotal) {
			cout << "No";
		} else {
			cout << "Yes";
		}
		cout << endl;
	}

	return 0;
}