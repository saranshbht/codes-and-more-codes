#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		// int count = 0;
		// for (int i = 0; i < n; i++) {
		//  int ans = 1;
		//  for (int j = i; j < n; j++) {
		//      ans *= arr[j];
		//      if ((ans & 1) || (ans % 4 == 0))
		//          count++;
		//  }
		//  // cout << ans << endl;
		// }
		// cout << count << endl;
		int odds = 0;
		bool flag = true;
		long long ans = 1ll * n * (n + 1) / 2;
		vector<pair<int, int> > v;
		for (int i = 0; i < n; i++) {
			if (arr[i] & 1)
				odds++;
			else if (arr[i] % 4 != 0) {
				if (v.size() > 0 && !flag)
					v[v.size() - 1].second = odds;
				v.push_back(make_pair(odds, 0));
				odds = 0;
				flag = false;
			} else {
				if (v.size() > 0 && !flag)
					v[v.size() - 1].second = odds;
				odds = 0;
				flag = true;
			}
		}
		if (!flag)
			v[v.size() - 1].second = odds;
		int k = v.size();
		for (int i = 0; i < k; i++) {
			ans -= (1ll * v[i].first * v[i].second + v[i].first + v[i].second + 1);
		}
		cout << ans << endl;
	}

// 1 2 2 2 3 4

	return 0;
}