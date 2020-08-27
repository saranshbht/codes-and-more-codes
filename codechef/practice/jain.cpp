#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<char, int> mp;
	mp['a'] = 0;
	mp['e'] = 1;
	mp['i'] = 2;
	mp['o'] = 3;
	mp['u'] = 4;
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		string arr[n];
		vector<vector<int> > v(n, vector<int>(5, 0));
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			int k = arr[i].size();
			for (int j = 0; j < k; j++) {
				v[i][mp[arr[i][j]]]++;
			}
		}

		vector<vector<int> > count(n, vector<int>(5, 0));
		for (int j = 0; j < 5; j++) {
			if (v[n - 1][j]) {
				count[n - 1][j] = 1;
			}
		}

		for (int i = n - 2; i >= 0; i--) {
			for (int j = 0; j < 5; j++) {
				if (v[i][j]) {
					count[i][j] = count[i + 1][j] + 1;
				} else {
					count[i][j] = count[i + 1][j];
				}
			}
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < 5; j++) {
				cout << count[i][j] << " ";
			}
			cout << endl;
		}

		long long total = 0;
		for (int i = 0; i < n - 1; i++) {
			int minm = INT_MAX;
			for (int j = 0; j < 5; j++)
				if (!v[i][j]) {
					minm = min(minm, count[i + 1][j]);
				}
			if (minm == INT_MAX) {
				total += n - i - 1;
			} else {
				total += minm;
			}
			//cout << total << endl;
		}
		cout << total << endl;
	}

	return 0;
}