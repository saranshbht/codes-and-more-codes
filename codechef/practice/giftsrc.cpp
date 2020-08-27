#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> s;
		int x = 0, y = 0;
		if (s[0] == 'L') {
			x--;
		} else if (s[0] == 'R') {
			x++;
		} else if (s[0] == 'U') {
			y++;
		} else {
			y--;
		}
		for (int i = 1; i < n; i++) {
			if (s[i] == 'L' || s[i] == 'R') {
				if (s[i - 1] == 'L' || s[i - 1] == 'R') {
					continue;
				}
				if (s[i] == 'L') {
					x--;
				} else {
					x++;
				}
			} else {
				if (s[i - 1] == 'U' || s[i - 1] == 'D') {
					continue;
				}
				if (s[i] == 'U') {
					y++;
				} else {
					y--;
				}
			}
		}
		cout << x << " " << y << endl;
	}

	return 0;
}