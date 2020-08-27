#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	string s;
	cin >> t;
	while (t--) {
		map<string, int> mp;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> s;
			mp[s]++;
		}
		int max = INT_MIN;
		string boy;
		for (auto i : mp) {
			if (i.second > max) {
				max = i.second;
				boy = i.first;
			}
		}
		cout << boy << endl;
	}

	return 0;
}