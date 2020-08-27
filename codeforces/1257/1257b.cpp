#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (x == 1) {
			if (y == 1) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		} else if (x == 2 || x == 3) {
			if (y < 4) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}