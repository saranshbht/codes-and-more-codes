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
		bool flag = true;
		int a = -1, b = -1, c = -1;
		for (int i = 2; i * i < n; i++) {
			if (n % i == 0) {
				a = i;
				// cout << a << endl;
				int m = n / i;
				for (int j = i + 1; j * j < m; j++) {
					if (m % j == 0) {
						b = j;
						c = m / j;
						// cout << b << " " << c << endl;
						flag = false;
						break;
					}
				}
				if (!flag) {
					break;
				}
			}
		}
		if (flag) {
			cout << "NO";
		} else {
			cout << "YES" << endl;
			cout << a << " " << b << " " << c;
		}
		cout << endl;
	}

	return 0;
}