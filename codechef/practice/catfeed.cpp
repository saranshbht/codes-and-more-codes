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
		int arr[m];
		for (int i = 0; i < m; i++) {
			cin >> arr[i];
		}
		bool flag = true;
		for (int i = 0; i < m; i += n) {
			int end = min(n, m - i);
			vector<int> v(n + 1, 0);
			for (int j = i; j < i + end; j++) {
				if (v[arr[j]]) {
					flag = false;
					break;
				}
				v[arr[j]]++;
			}
			if (!flag) {
				break;
			}
		}
		if (!flag) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}