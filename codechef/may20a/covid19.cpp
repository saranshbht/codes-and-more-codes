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
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int minm = INT_MAX, maxm = INT_MIN;
		int count = 1;
		for (int i = 1; i < n; i++) {
			if (a[i] - a[i - 1] <= 2) {
				count++;
			} else {
				minm = min(minm, count);
				maxm = max(maxm, count);
				count = 1;
			}
		}
		minm = min(minm, count);
		maxm = max(maxm, count);
		cout << minm << " " << maxm << endl;
	}

	return 0;
}