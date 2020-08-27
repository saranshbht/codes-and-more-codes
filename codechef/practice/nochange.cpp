#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, p;
	cin >> t;
	while (t--) {
		cin >> n >> p;
		int arr[n];
		map<int, int> pos;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			pos[arr[i]] = i;
		}
		sort(arr, arr + n);
		int i;
		for (i = 0; i < n; i++) {
			if (p % arr[i]) {
				break;
			}
		}
		if (i != n) {
			cout << "YES ";
			for (int j = 0; j < n; j++) {
				if (j == i) {
					cout << p / arr[i] + 1 << " ";
				} else {
					cout << 0 << " ";
				}
			}
		} else {
			vector<int> res(n, 0);
			for (i = 0; i < n - 1; i++) {
				if (arr[i + 1] % arr[i]) {
					res[pos[arr[i]]] = p / arr[i] - 1;
					res[pos[arr[i + 1]]] = 1;
					break;
				}
			}
			if (i != n - 1) {
				cout << "YES ";
				for (auto &j : res) {
					cout << j << " ";
				}
			} else {
				cout << "NO";
			}

		}
		cout << endl;

	}
	return 0;
}