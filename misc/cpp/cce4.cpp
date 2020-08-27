#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int p;
	string s;
	cin >> p >> s;
	int n = s.size();
	if (n % p != 0) {
		cout << -1;
	} else {
		vector<int> cnt(26, 0);
		for (int i = 0; i < n; i++) {
			cnt[s[i] - 'a']++;
		}
		int i;
		for (i = 0; i < 26; i++) {
			if (cnt[i]) {
				if (cnt[i] % p) {
					break;
				}
			}
		}
		if (i != 26) {
			cout << -1;
		} else {
			vector<char> v;
			for (int i = 0; i < 26; i++)
				if (cnt[i]) {
					int k = cnt[i] / p;
					for (int j = 0; j < k; j++) {
						v.push_back(i + 'a');
					}
				}
			for (int i = 0; i < p; i++) {
				for (auto &j : v) {
					cout << j;
				}
			}
		}
	}
	cout << endl;
	return 0;
}