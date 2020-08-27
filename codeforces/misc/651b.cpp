#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	set<int> s;
	map<int, int> mp;
	int n, a;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		mp[a]++;
		s.insert(a);
	}
	int ans = 0;
	while (1) {
		if (s.size() <= 1) {
			break;
		}
		ans += s.size() - 1;
		for (auto it = s.begin(); it != s.end();) {
			mp[*it]--;
			if (mp[*it] == 0) {
				auto j = it++;
				s.erase(*j);
			} else {
				it++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}