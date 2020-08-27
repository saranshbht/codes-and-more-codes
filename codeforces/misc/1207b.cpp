#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int arr[n][m];
	int brr[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			brr[i][j] = 0;
		}
	vector<pair<int, int> > v;
	int cnt = 0;
	n--; m--;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			if (arr[i][j] && arr[i + 1][j] && arr[i][j + 1] && arr[i + 1][j + 1]) {
				brr[i][j] = brr[i + 1][j] = brr[i][j + 1] = brr[i + 1][j + 1] = 1;
				v.push_back(make_pair(i + 1, j + 1));
			}
	}
	n++; m++;
	int i, j;
	// for(int i = 0; i < n; i++){
	//     for(int j = 0; j < m; j++)
	//         cout << arr[i][j];
	//     cout << endl;
	// }
	bool flag = true;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr[i][j] != brr[i][j]) {
				flag = false;
				break;
			}
		}
		if (!flag) {
			break;
		}
	}

	if (i < n) {
		cout << -1 << endl;
	} else {
		int k = v.size();
		cout << k << endl;
		for (int i = 0; i < k; i++) {
			cout << v[i].first << " " << v[i].second << endl;
		}
	}

	return 0;
}