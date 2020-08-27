#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	if (m == 0) {
		cout << "YES";
	} else {
		int arr[m];
		for (int i = 0; i < m; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + m);
		if (arr[0] == 1 || arr[m - 1] == n) {
			cout << "NO";
		} else if (m == 1 || m == 2) {
			cout << "YES";
		} else {
			int i;
			for (i = 2; i < m; i++) {
				if (arr[i] == arr[i - 1] + 1 && arr[i - 1] == arr[i - 2] + 1) {
					break;
				}
			}
			if (i == m) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}
	}
	cout << endl;
	return 0;
}