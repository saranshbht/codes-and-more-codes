#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, r, c;
	cin >> t;
	while (t--) {
		vector<pair<int, int> > ans;
		cin >> r >> c;
		if (r != c) {
			ans.push_back(make_pair((r + c) / 2, (r + c) / 2));
		}
		if (r != 1 || c != 1) {
			ans.push_back(make_pair(1, 1));
		}
		for (int i = 2; i <= 7; i++) {
			ans.push_back(make_pair(i, i));
			if (i > 4) {
				ans.push_back(make_pair(2 * i - 8, 8));
				ans.push_back(make_pair(8, 2 * i - 8));
			} else {
				ans.push_back(make_pair(1, 2 * i - 1));
				ans.push_back(make_pair(2 * i - 1, 1));
			}
			ans.push_back(make_pair(i, i));
		}
		ans.push_back(make_pair(8, 8));
		int k = ans.size();
		cout << k << endl;
		for (int i = 0; i < k; i++) {
			cout << ans[i].first << " " << ans[i].second << endl;
		}
	}

	return 0;
}