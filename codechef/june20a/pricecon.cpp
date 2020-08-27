#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, p;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> p;
			sum += max(0, p - k);
		}
		cout << sum << endl;
	}

	return 0;
}