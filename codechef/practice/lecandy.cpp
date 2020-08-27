#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		int sum = 0, a;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a;
		}
		if (sum <= c) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << endl;
	}

	return 0;
}