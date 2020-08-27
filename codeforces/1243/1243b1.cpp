#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n;
	string s, t;

	cin >> k;
	while (k--) {
		cin >> n;
		cin >> s >> t;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (s[i] != t[i]) {
				v.push_back(i);
			}
		}
		if (v.size() != 2) {
			cout << "No";
		} else {
			if (s[v[0]] == s[v[1]] && t[v[0]] == t[v[1]]) {
				cout << "Yes";
			} else {
				cout << "No";
			}
		}
		cout << endl;
	}

	return 0;
}