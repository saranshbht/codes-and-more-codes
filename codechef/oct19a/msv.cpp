#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MAX 1000000

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<vector<int> > idx(MAX + 1);
		int star[n + 1] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a;
			idx[a].push_back(i + 1);
		}

		for (int i = 1; i <= MAX; i++) {
			if (!idx[i].size()) {
				continue;
			}
			for (int j = i; j <= MAX; j += i) {
				if (idx[j].size()) {
					star[idx[i][idx[i].size() - 1]] +=  lower_bound(idx[j].begin(), idx[j].end(), idx[i][idx[i].size() - 1]) - idx[j].begin();
				}
			}
		}

		int maxm = INT_MIN;
		for (int i = 1; i < n + 1; i++) {
			maxm = max(maxm, star[i]);
		}
		cout << maxm << endl;
	}

	return 0;
}