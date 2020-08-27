#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b, c;
	cin >> t;
	while (t--) {
		int count = 0;
		cin >> a >> b >> c;
		if (a) {
			a--;
			count++;
		}
		if (b) {
			b--;
			count++;
		}
		if (c) {
			c--;
			count++;
		}
		if (a > 0 && b > 0 && c > 0) {
			a--; b--; c--;
			count++;
		}
		if (a )
			if (a > 0 && c > 0) {
				count++;
				a--; c--;
			}
		if (a > 0 && b > 0) {
			count++;
			a--; b--;
		}
		if (b > 0 && c > 0) {
			count++;
			b--; c--;
		}

		cout << count << endl;
	}

	return 0;
}