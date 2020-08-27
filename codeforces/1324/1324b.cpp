#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int l[5001][5001];
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			l[i][i] = 1;
		}
		for (int cl = 2; cl <= n; cl++) {
			for (int i = 0; i < n - cl + 1; i++) {
				int j = i + cl - 1;
				if (arr[i] == arr[j] && cl == 2) {
					l[i][j] = 2;
				} else if (arr[i] == arr[j]) {
					l[i][j] = l[i + 1][j - 1] + 2;
				} else {
					l[i][j] = max(l[i][j - 1], l[i + 1][j]);
				}
			}
		}
		if (l[0][n - 1] > 2) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}