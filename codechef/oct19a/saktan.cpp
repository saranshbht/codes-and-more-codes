#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, q, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m >> q;
		int arrrow[n + 1] = {0};
		int arrcol[m + 1] = {0};
		ll countoddrow = 0, countoddcol = 0;
		while (q--) {
			cin >> x >> y;
			arrrow[x]++;
			arrcol[y]++;
		}
		for (int i = 1; i < m + 1; i++) {
			if (arrcol[i] & 1)
				countoddcol++;
		}
		for (int i = 1; i < n + 1; i++) {
			if (arrrow[i] & 1)
				countoddrow++;
		}
		cout << countoddcol * (n - countoddrow) + countoddrow * (m - countoddcol) << endl;
	}

	return 0;
}