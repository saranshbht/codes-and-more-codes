#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	for (int c = 1; c <= t; c++) {
		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
		}
		int maxm = 0;
		int count = 2;
		int diff = v[1] - v[0];
		for (int i = 2; i < n; i++) {
			if (v[i] - v[i - 1] == diff) {
				count++;
			} else {
				maxm = max(count, maxm);
				diff = v[i] - v[i - 1];
				count = 2;
			}
		}
		maxm = max(count, maxm);
		cout << "Case #" << c << ": " << maxm << endl;
	}

	return 0;
}