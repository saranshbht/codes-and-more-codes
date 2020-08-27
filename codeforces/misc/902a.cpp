#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a, b;
	cin >> n >> m;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	if (v[0].first != 0) {
		cout << "NO";
	} else if (v[0].second >= m) {
		cout << "YES";
	} else {
		bool flag = false;
		int last = -1;
		while (1) {
			int i;
			for (i = 0; i < n; i++) {
				if (v[i].second >= m) {
					if (i == last) {
						i = n;
						break;
					}
					last = i;
					if (v[i].first == 0) {
						flag = true;
					} else {
						m = v[i].first;
					}
					break;
				}
			}
			if (i == n || flag) {
				break;
			}
		}
		if (flag) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	cout << endl;

	return 0;
}
