#include<bits/stdc++.h>
using namespace std;
// #define endl '\n'


int main() {
	// ios_base :: sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);

	int t, n, p, x;
	cin >> t;
	while (t--) {
		cin >> n >> p;
		vector<vector<int> > arr(n, vector<int>(n, 0));
		for (int i = 1; i <= n; i++) {
			int prev = -100;
			for (int j = 1; j <= n / 2 + 1; j++) {
				cout << 1 << " " << i << " " << j << " " << i << " " << n / 2 + j - 1 << endl;
				cin >> x;
				if (x == -1) {
					return 0;
				}
				if (x == prev - 1) {
					arr[i - 1][j - 2] = 1;
				} else if (x == prev + 1) {
					arr[i - 1][n / 2 + j - 2] = 1;
				} else if (x && x == prev) {
					int y;
					cout << 1 << " " << i << " " << j << " " << i << " " << n / 2 + j - 2 << endl;
					cin >> y;
					if (y == -1) {
						return 0;
					}
					if (y != x) {
						arr[i - 1][j - 2] = arr[i - 1][n / 2 + j - 2] = 1;
					}
				}
				prev = x;
			}
		}

		cout << 2 << endl;
		for (auto &i : arr) {
			for (auto &j : i) {
				cout << j << " ";
			}
			cout << endl;
		}

		cin >> x;
		if (x == -1) {
			return 0;
		}
	}
	return 0;
}