#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string s, p;
	cin >> t;
	while (t--) {
		cin >> s >> p;
		map<char, int> mp;
		for (auto &i : p) {
			mp[i]++;
		}
		bool pre = true;
		int i = 1;
		while (i < p.size() && p[i] == p[0] && i++);
		if (i < p.size() && p[i] < p[0]) {
			pre = false;
		}

		string prefix, suffix;
		for (auto &i : s) {
			if (mp[i]) {
				mp[i]--;
			} else {
				if (i < p[0]) {
					prefix.push_back(i);
				} else if (i > p[0]) {
					suffix.push_back(i);
				} else {
					pre ? prefix.push_back(i) : suffix.push_back(i);
				}
			}
		}
		sort(prefix.begin(), prefix.end());
		sort(suffix.begin(), suffix.end());

		cout << prefix + p + suffix << endl;
	}

	return 0;
}