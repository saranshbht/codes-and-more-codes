#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	long long x;
	cin >> t;
	while (t--) {
		cin >> n >> x;

		int a;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			cin >> a;
			mp[a]++;
		}

		vector<int> keys;
		for (auto &i : mp) {
			keys.push_back(i.first);
		}

		vector<int> dbl_prefix(keys.size());
		vector<int> cnt_prefix(keys.size());

		cnt_prefix[0] = mp[keys[0]];
		for (int i = 1; i < keys.size(); i++) {
			int k = keys[i - 1] / x;
			int val = 0;
			if (!(keys[i - 1] % x) && !(k & (k - 1))) {
				val++;
			}
			cnt_prefix[i] = mp[keys[i]] + cnt_prefix[i - 1] - val;
		}
		// for (auto &i : cnt_prefix)
		//  cout << i << " ";
		// cout << endl;

		int num = keys[0] / x + !!(keys[0] % x);
		int cnt = 0;
		while (num > (1 << cnt)) {
			cnt++;
		}
		dbl_prefix[0] = cnt + mp[keys[0]];
		for (int i = 1; i < keys.size(); i++) {
			num = keys[i] / keys[i - 1] + !!(keys[i] % keys[i - 1]);
			cnt = 1;
			while (num > (1 << cnt)) {
				cnt++;
			}
			dbl_prefix[i]  = cnt + mp[keys[i]] - 1 + dbl_prefix[i - 1];
		}

		// for (auto &i : dbl_prefix)
		//  cout << i << " ";
		// cout << endl;

		vector<int> direct(keys.size());

		//    num = keys[0] / x + !!(keys[0] % x);
		// cnt = 0;
		// while (num > (1 << cnt))
		//  cnt++;
		// direct[0] = cnt + mp[keys[0]];
		for (int i = 0; i < keys.size(); i++) {
			num = keys[i] / x + !!(keys[i] % x);
			// cout << num << " ";
			cnt = 0;
			while (num > (1 << cnt)) {
				cnt++;
			}
			// cout << cnt << endl;
			direct[i] = cnt + cnt_prefix[i];
		}

		// for (auto &i : direct)
		//  cout << i << " ";
		// cout << endl;

		int maxdiff = INT_MIN;
		int maxindex = -1;
		for (int i = 0; i < keys.size(); i++) {
			int diff = dbl_prefix[i] - direct[i];
			if (diff > maxdiff) {
				maxdiff = diff;
				maxindex = i;
			}
		}
		int res;
		if (maxdiff > 0) {
			res = direct[maxindex];
			res += dbl_prefix[keys.size() - 1] - dbl_prefix[maxindex];
		} else {
			res = dbl_prefix[keys.size() - 1];
		}
		cout << res << endl;
	}

	return 0;
}