#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string s, r;
	cin >> t;
	while (t--) {
		cin >> s >> r;
		if (s == r) {
			cout << s << endl;
			continue;
		}
		int ssize = s.size();
		int rsize = r.size();
		map<char, int> mps;
		map<char, int> mpr;
		for (int i = 0; i < ssize; i++) {
			mps[s[i]]++;
		}
		for (int i = 0; i < rsize; i++) {
			mpr[r[i]]++;
		}
		int i = 0;
		for (; i < ssize; i++)
			if (mps[s[i]] > mpr[s[i]]) {
				break;
			}
		if (i != ssize) {
			cout << "Impossible";
		} else {
			vector<string> v;
			for (int i = 0; i < rsize; i++) {
				if (mpr[r[i]] > mps[r[i]]) {
					string a(1, r[i]);
					v.push_back(a);
					mpr[r[i]]--;
				}
			}
			v.emplace(v.begin(), s);
			sort(v.begin(), v.end());
			for (auto &i : v) {
				cout << i;
			}
		}
		cout << endl;
		cout << strcmp("cbda", "cbd");
	}

	return 0;
}