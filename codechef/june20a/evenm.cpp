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
		vector<vector<int> > arr(n, vector<int>(n));
		int a = 1, val = 1;
		while (a <= n) {
			int r = a - 1, c = 0;
			while (val <= a * a) {
				while (c < r) {
					arr[r][c++] = val++;
				}
				while (r >= 0) {
					arr[r--][c] = val++;
				}
			}
			a++;
		}
		for (auto &i : arr) {
			for (auto &j : i) {
				cout << j << " ";
			}
			cout << endl;
		}
	}

	return 0;
}