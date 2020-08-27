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
		if (n == 1) {
			cout << -1;
		} else {
			for (int i = 1; i < n; i++) {
				cout << 9;
			}
			cout << 4;
		}
		cout << endl;
	}

	return 0;
}