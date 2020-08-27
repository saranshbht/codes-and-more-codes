#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int n = s.size();
		unordered_map<char, pair<int, int> > mp;
		for (int i = 0; i < n; i++) {
			if (mp.find(s[i]) != mp.end())
				mp[s[i]].second = i;
			else
				mp[s[i]].first = i;
		}
		char minchar = 127;
		int maxm = INT_MIN;
		for (auto &a : mp) {
			if (a.second.second - a.second.first > maxm) {
				maxm = a.second.second - a.second.first;
				minchar = a.first;
			} else if (a.second.second - a.second.first == maxm) {
				minchar = min(minchar, a.first);
			}
		}
		cout << minchar << " " << maxm << endl;
	}

	return 0;
}