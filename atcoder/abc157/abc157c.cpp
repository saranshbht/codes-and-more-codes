#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, s, c;
	cin >> n >> m;
	if (m == 0) {
		if (n == 1) {
			cout << 0;
		} else {
			cout << int(pow(10, n - 1) + 0.5);
		}
		cout << endl;
		return 0;
	}
	map<int, set<int> > mp;
	for (int i = 0; i < m; i++) {
		cin >> s >> c;
		mp[s].insert(c);
	}

	bool flag = false;
	int maxm = INT_MIN;
	int minm = INT_MAX;
	for (auto &i : mp) {
		if (i.second.size() > 1 || (*i.second.begin() == 0 && i.first == 1 && n > 1) || i.first > n) {
			flag = true;
			break;
		}
		minm = min(minm, i.first);
		maxm = max(maxm, i.first);
	}
	if (flag) {
		cout << -1;
	} else {
		int arr[n + 1] = {0};
		if (n > 1) {
			arr[1] = 1;
		}
		for (auto &i : mp) {
			arr[i.first] = *i.second.begin();
		}
		for (int i = 1; i <= n; i++) {
			cout << arr[i];
		}
	}
	cout << endl;
	return 0;
}