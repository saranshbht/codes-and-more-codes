#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	char arr[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++) {
			cin >> arr[i][j];
		}
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1]) {
				break;
			}
			if (arr[i][j] == '.') {
				arr[i][j] = '#';
			} else {
				arr[i][j] = '.';
			}
			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1]) {
				break;
			}
			if (arr[i][j] == '.') {
				arr[i][j] = '#';
			} else {
				arr[i][j] = '.';
			}


			if (arr[i + 1][j] == '.') {
				arr[i + 1][j] = '#';
			} else {
				arr[i + 1][j] = '.';
			}
			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1]) { break; }
			if (arr[i + 1][j] == '.') {
				arr[i + 1][j] = '#';
			} else {
				arr[i + 1][j] = '.';
			}


			if (arr[i][j + 1] == '.') {
				arr[i][j + 1] = '#';
			} else {
				arr[i][j + 1] = '.';
			}
			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1]) {
				break;
			}
			if (arr[i][j + 1] == '.') {
				arr[i][j + 1] = '#';
			} else {
				arr[i][j + 1] = '.';
			}


			if (arr[i + 1][j + 1] == '.') {
				arr[i + 1][j + 1] = '#';
			} else {
				arr[i + 1][j + 1] = '.';
			}
			if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == arr[i][j + 1] && arr[i][j + 1] == arr[i + 1][j + 1]) {
				break;
			}
			if (arr[i + 1][j + 1] == '.') {
				arr[i + 1][j + 1] = '#';
			} else {
				arr[i + 1][j + 1] = '.';
			}

		}
		if (j != 3) {
			break;
		}
	}
	if (i != 3) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << endl;
	return 0;
}