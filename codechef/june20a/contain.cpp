#include<bits/stdc++.h>
using namespace std;

int pt_in_poly(int n, vector<int> &x, vector<int> &y, int xpt, int ypt) {
	int i, j, c = 0;
	for (int i = 0, j = n - 1; i < n; j = i++) {
		if (((y[i] >= ypt) != (y[j] >= ypt)) &&
		        (xpt <= (long double)(x[j] - x[i]) * (ypt - y[i]) / (y[j] - y[i]) + x[i])) {
			c = !c;
		}
	}
	return c;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, xpt, ypt;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		int a, b;
		set<int> x, y;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (a) {
				x.insert(a);
			} else {
				y.insert(b);
			}
		}
		vector<int> xpts, ypts;
		if (x.size() == 1) {
			xpts.push_back(*x.begin());
			ypts.push_back(0);
		} else if (x.size() > 1) {
			int maxm = INT_MIN, minm = INT_MAX;
			for (auto &i : x) {
				maxm = max(maxm, i);
				minm = min(minm, i);
			}
			xpts.push_back(minm);
			xpts.push_back(maxm);
			ypts.push_back(0);
			ypts.push_back(0);
		}

		if (y.size() == 1) {
			ypts.push_back(*y.begin());
			xpts.push_back(0);
		} else if (y.size() > 1) {
			int maxm = INT_MIN, minm = INT_MAX;
			for (auto &i : y) {
				maxm = max(maxm, i);
				minm = min(minm, i);
			}
			ypts.push_back(maxm);
			ypts.push_back(minm);
			xpts.push_back(0);
			xpts.push_back(0);
		}

		while (q--) {
			cin >> xpt >> ypt;
			if (xpts.size() < 3) {
				cout << 0;
			} else {
				cout << pt_in_poly(xpts.size(), xpts, ypts, xpt, ypt);
			}
			cout << endl;
		}

	}

	return 0;
}