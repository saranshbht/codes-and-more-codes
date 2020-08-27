#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int  t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		set<int> s;
		vector<int> cnt(n + 1, 0);
		for (int i = 0; i < n; i++) {
			s.insert(a[i]);
			cnt[a[i]]++;
		}
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}
		if (n == s.size() || s.size() == 1) {
			cout << 1 << endl;
			continue;
		}
		int maxm = INT_MIN;
		for (int &i : cnt) {
			maxm = max(maxm, min(i, (int)s.size() - 1));
			maxm = max(maxm, min(i - 1, (int)s.size()));
		}
		cout << maxm << endl;
	}

	return 0;
}