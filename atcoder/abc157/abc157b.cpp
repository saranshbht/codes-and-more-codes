#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	bool bingo[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			bingo[i][j] = false;
		}
	}
	int a;
	map<int, pair<int, int> > mp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a;
			mp[a] = make_pair(i, j);
		}
	}
	cin >> n;
	int brr[n];
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (mp.find(a) != mp.end()) {
			bingo[mp[a].first][mp[a].second] = true;
		}
	}
	if (bingo[0][0] && bingo[1][1] && bingo[2][2]) {
		cout << "Yes";
	} else if (bingo[0][2] && bingo[1][1] && bingo[2][0]) {
		cout << "Yes";
	} else if (bingo[0][0] && bingo[0][1] && bingo[0][2]) {
		cout << "Yes";
	} else if (bingo[1][0] && bingo[1][1] && bingo[1][2]) {
		cout << "Yes";
	} else if (bingo[2][0] && bingo[2][1] && bingo[2][2]) {
		cout << "Yes";
	} else if (bingo[0][0] && bingo[1][0] && bingo[2][0]) {
		cout << "Yes";
	} else if (bingo[0][1] && bingo[1][1] && bingo[2][1]) {
		cout << "Yes";
	} else if (bingo[0][2] && bingo[1][2] && bingo[2][2]) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	cout << endl;
	return 0;
}