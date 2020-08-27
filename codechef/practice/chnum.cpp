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
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a >= 0) {
				count++;
			}
		}
		if (count == n || count == 0) {
			cout << n << " " << n;
		} else {
			if (count >= n - count) {
				cout << count << " " << n - count;
			} else {
				cout << n - count << " " << count;
			}
		}
		cout << endl;
	}
	return 0;
}