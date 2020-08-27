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
		pair<int, int> maxm(INT_MIN, -1);
		pair<int, int> minm(INT_MAX, -1);
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a > maxm.first) {
				maxm.first = a;
				maxm.second = i;
			}
			if (a < minm.first) {
				minm.first = a;
				minm.second = i;
			}
		}
		if (maxm.second < minm.second) {
			cout << maxm.first << " " << minm.first;
		} else {
			cout << minm.first << " " << maxm.first;
		}
		cout << endl;
	}

	return 0;
}