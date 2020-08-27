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
		char arr[n][m];
		if ((n * m) & 1) {
			arr[0][0] = 'B';
			for (int i = 1; i < m; i++) {
				if (arr[0][i - 1] == 'B') {
					arr[0][i] = 'W';
				} else {
					arr[0][i] = 'B';
				}
			}
			for (int i = 1; i < n; i++) {
				for (int j = 0; j < m; j++) {
					if (arr[i - 1][j] == 'B') {
						arr[i][j] = 'W';
					} else {
						arr[i][j] = 'B';
					}
				}
			}
		} else {
			arr[0][0] = arr[1][0] = arr[0][1] = 'B';
			for (int i = 2; i < m; i++) {
				if (arr[0][i - 1] == 'B') {
					arr[0][i] = 'W';
				} else {
					arr[0][i] = 'B';
				}
			}
			for (int i = 2; i < n; i++) {
				if (arr[i - 1][0] == 'B') {
					arr[i][0] = 'W';
				} else {
					arr[i][0] = 'B';
				}
			}
			for (int i = 1; i < n; i++) {
				for (int j = 1; j < m; j++) {
					if (arr[i - 1][j] == 'B') {
						arr[i][j] = 'W';
					} else {
						arr[i][j] = 'B';
					}
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}