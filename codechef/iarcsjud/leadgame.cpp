#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, s, t, w = 1, l = INT_MIN, p1 = 0, p2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s >> t;
		p1 += s;
		p2 += t;
		if (p1 > p2) {
			if (p1 - p2 > l) {
				w = 1;
				l = p1 - p2;
			}
		} else {
			if (p2 - p1 > l) {
				w = 2;
				l = p2 - p1;
			}
		}
		// cout << p1 << " " << p2 << endl;
	}
	cout << w << " " << l << endl;
	return 0;
}