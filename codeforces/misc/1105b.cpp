#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	string s;
	cin >> n >> k >> s;
	int i, j;
	map<char, int> mp;
	for (i = 0; i <= n - k;) {
		for (j = i; j < i + k - 1; j++) {
			if (s[j] != s[j + 1]) {
				break;
			}
		}
		if (j == i + k - 1) {
			mp[s[i]]++;
		}
		i = j + 1;
	}
	int maxm = 0;
	for (auto &i : mp) {
		maxm = max(maxm, i.second);
	}
	cout << maxm << endl;
	return 0;
}