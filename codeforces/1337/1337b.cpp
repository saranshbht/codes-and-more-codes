#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, n, m;
	cin >> t;
	while (t--) {
		cin >> x >> n >> m;
		while (x > 10 * m && n--) {
			x = x / 2 + 10;
		}
		if (x <= 10 * m) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}