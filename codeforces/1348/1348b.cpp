#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		set<int> s;
		for (int i = 0; i < n; i++) {
			s.insert(a[i]);
		}
		if (s.size() > k) {
			cout << -1;
		} else {
			cout << n * k << endl;
			for (int i = 0; i < n; i++) {
				for (auto &j : s) {
					cout << j << " ";
				}
				for (int i = 0; i < k - size(); i++) {
					cout << 1 << " ";
				}
			}
		}
		cout << endl;
	}

	return 0;
}