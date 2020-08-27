#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int> p(n);
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		int maxm = -1;
		for (int i = 0; i < n; i++) {
			if (k % p[i] == 0 && p[i] > maxm) {
				maxm = p[i];
			}
		}
		cout << maxm << endl;
	}

	return 0;
}