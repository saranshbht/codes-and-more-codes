#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, h;
	string s;
	cin >> n >> s >> h;
	// int d = 2 * ()
	for (int i = 1; i <= h; i++) {
		int d1 = 2 * (h - i);
		int d2 = 2 * (i - 1);
		// cout << d1 << " " << d2 << endl;
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		int k = i - 1;
		bool flag = false;
		while (k < n) {
			// cout << k;
			cout << s[k];
			if (flag) {
				if (d2) {
					for (int j = 1; j < d2; j++) {
						cout << " ";
					}
					k += d2;
					flag = !flag;
				} else {
					for (int j = 1; j < d1; j++) {
						cout << " ";
					}
					k += d1;
				}
			} else {
				if (d1) {
					for (int j = 1; j < d1; j++) {
						cout << " ";
					}
					k += d1;
					flag = !flag;
				} else {
					for (int j = 1; j < d2; j++) {
						cout << " ";
					}
					k += d2;
				}
			}
		}

		cout << endl;
	}

	return 0;
}