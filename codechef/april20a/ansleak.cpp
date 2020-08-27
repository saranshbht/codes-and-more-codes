#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<vector<int> > arr(500, vector<int>(5000));
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, n, k, m, a;
	cin >> t;
	while (t--) {
		cin >> n >> m >> k;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < k; j++) {
				cin >> arr[i][j];
			}
		}
		vector<int> res(n);
		vector<int> vs(k);
		for (int i = 0; i < k; i++) {
			vs[i] = i;
		}
		set<int> s(vs.begin(), vs.end());
		for (int i = 0; i < n; i++) {
			vector<int> cnt(m + 1, 0);
			int maxm = 0, maxEl = 0;
			for (auto &j : s) {
				int a = arr[i][j];
				cnt[a]++;
				if (cnt[a] > maxm) {
					maxm = cnt[a];
					maxEl = a;
				}
			}
			res[i] = maxEl;
			for (int j = 0; j < k; j++) {
				if (arr[i][j] == maxm) {
					s.erase(j);
				}
			}
			if (!s.size()) {
				s.insert(vs.begin(), vs.end());
			}
		}
		for (int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}