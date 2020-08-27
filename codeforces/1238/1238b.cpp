#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, n, r, x;
	cin >> q;
	while (q--) {
		set<int> s;
		cin >> n >> r;
		for (int i = 0; i < n; i++) {
			cin >> x;
			s.insert(x);
		}
		if (s.size() == 1) {
			cout << 1 << endl;
			continue;
		}
		vector<int> v(s.begin(), s.end());
		n = v.size();
		int i = 1;
		for (; i < n; i++) {
			if (v[n - i - 1] <= i * r) {
				break;
			}
		}
		cout << i << endl;
	}

	return 0;
}