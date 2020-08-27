#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	cin >> s;
	n = s.size();
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			x--;
		} else if (s[i] == 'R') {
			x++;
		} else if (s[i] == 'U') {
			y--;
		} else {
			y++;
		}
	}
	int distx = x, disty = y;
	if (x < 0) {
		distx = -distx;
	}
	if (y < 0) {
		disty = -disty;
	}
	if ((distx + disty) & 1) {
		cout << -1;
	} else {
		cout << (distx + disty) / 2;
	}
	cout << endl;
	return 0;
}