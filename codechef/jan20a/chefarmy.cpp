#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	char c;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		bool arr[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> c;
				arr[i][j] = c - '0';
			}
		}
		int s[n];
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		int p[n];
		for (int i = 0; i < n; i++) {
			cin >> p[i];
		}
		cout << n << endl;
		for (int i = 0; i < n; i++) {
			cout << 1 << " " << s[i] << " " << i + 1 << endl;
		}
	}
	return 0;
}