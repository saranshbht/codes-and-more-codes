#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, x, y, l, r;
	cin >> n >> q;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector < i
	vector<vector<int> > range(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {

		}
	}

	int prev = 0;
	while (q--) {
		cin >> x >> y;
		l = (x + prev - 1) % n;
		r = (y + prev - 1) % n;
		if (l > r) {
			swap(l, r);
		}
		prev = range[l][r];
		cout << prev << endl;
	}

	return 0;
}