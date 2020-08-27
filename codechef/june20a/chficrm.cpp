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
		cin >> n;
		bool flag = true;
		int five = 0, ten = 0, fifteen = 0;
		for (int i = 0; i < n; i++) {
			cin >> c;
			if (flag) {
				if (c == 5) {
					five++;
				} else if (c == 10) {
					if (five) {
						five--;
						ten++;
					} else {
						flag = false;
					}
				} else {
					if (ten) {
						ten--;
					} else if (five >= 2) {
						five -= 2;
					} else {
						flag = false;
					}
				}

			}
		}
		cout << (flag ? "YES" : "NO") << endl;
	}

	return 0;
}