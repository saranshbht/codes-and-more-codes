#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		char a[9][9];
		for (int i = 0; i < 9; i++)
			for (int j = 0; j < 9; j++) {
				cin >> a[i][j];
			}
		a[0][0] = a[0][1];
		a[1][3] = a[1][4];
		a[2][6] = a[2][7];
		a[3][1] = a[3][0];
		a[4][4] = a[4][3];
		a[5][7] = a[5][6];
		a[6][2] = a[6][1];
		a[7][5] = a[7][4];
		a[8][8] = a[8][7];
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << a[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}