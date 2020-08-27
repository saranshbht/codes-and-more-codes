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
		vector<char> a(n, '0'), b(n, '0'), c(n);
		for (int i = 0; i < n; i++) {
			cin >> c[i];
		}
		int i;
		for (i = 0; i < n; i++) {
			if (c[i] == '2') {
				a[i] = b[i] = '1';
			} else if (c[i] == '1') {
				a[i] = '1';
				b[i] = '0';
				break;
			}
		}
		for (int j = 0; j < n; j++) {
			cout << a[j];
		}
		cout << endl;
		for (int j = 0; j <= i && j < n; j++) {
			cout << b[j];
		}
		for (int j = i + 1; j < n; j++) {
			cout << c[j];
		}
		cout << endl;

	}

	return 0;
}