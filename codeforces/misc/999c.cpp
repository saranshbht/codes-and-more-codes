#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	string s;
	map<char, int> mp;
	map<char, int> rem;
	cin >> s;
	for (int i = 0; i < n; i++) {
		mp[s[i]]++;
	}
	for (char i = 'a' ; i <= 'z'; i++) {
		if (mp.find(i) != mp.end()) {
			if (mp[i] < k) {
				rem[i] = mp[i];
				k -= mp[i];
			} else if (mp[i] >= k) {
				rem[i] = k;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (rem.find(s[i]) != mp.end()) {
			if (rem[s[i]] > 0) {
				rem[s[i]]--;
			} else {
				cout << s[i];
			}
		} else {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}