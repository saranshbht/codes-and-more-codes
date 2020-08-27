#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> k >> s;
		vector<vector<int> > v(k, vector<int> (26, 0));
		for (int i = 0; i < k; i++) {
			for (int j = i; j < n; j += k) {
				v[i][s[j] - 'a']++;
			}
		}
		for (int i = 0; i < n / k; i++) {
			for (int j = i * k; j < i * k + k; j++) {
				cout << s[j];
			}
			cout << endl;
		}
		int res = 0;
		// for (auto &i : v) {
		//  for (auto &j : i) {
		//      cout << j << " ";
		//  }
		//  cout << endl;
		// }
		for (int i = 0; i < k / 2; i++) {
			int l = max_element(v[i].begin(), v[i].end()) - v[i].begin();
			int m = max_element(v[k - 1 - i].begin(), v[k - 1 - i].end()) - v[k - 1 - i].begin();
			// cout << l << " " << v[i][l] << " " << v[k - 1 - i][l] << endl;
			// cout << m << " " << v[i][m] << " " << v[k - 1 - i][m] << endl;
			cout << (char)(l + 'a') << endl;
			cout << (char)(m + 'a') << endl;
			res += 2 * n / k - max(v[i][l] + v[i][m], v[k - 1 - i][l] + v[k - 1 - i][m]);
		}
		if (k & 1) {
			int l = max_element(v[k / 2].begin(), v[k / 2].end()) - v[k / 2].begin();
			cout << (char)(l + 'a') << endl;
			res += n / k - v[k / 2][l];
		}
		cout << res << endl;
	}

	return 0;
}