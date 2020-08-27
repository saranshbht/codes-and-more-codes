#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
			}
		}
		long long res = n * m;
		bool valid[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				valid[i][j] = true;
			}
		}
		int minm = min(n, m);
		minm = (minm - 1) / 2;
		for (int k = 1; k <= minm; k++) {
			for (int i = k; i < n - k; i++) {
				for (int j = k; j < m - k; j++) {
					if (valid[i][j]) {
						if ((arr[i][j - k] == arr[i][j + k]) && (arr[i - k][j] == arr[i + k][j])) {
							res++;
						} else {
							valid[i][j] = false;
						}
					}
				}
			}
		}
		cout << res << endl;
	}

	return 0;
}