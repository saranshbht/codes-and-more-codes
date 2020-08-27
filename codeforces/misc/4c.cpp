#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	map<string, int> mp;
	cin >> n;
	while (n--) {
		cin >> s;
		if (mp.find(s) == mp.end()) {
			cout << "OK";
			mp[s] = 1;
		} else {
			cout << s + to_string(mp[s]);
			mp[s]++;
		}
		cout << endl;
	}

	return 0;
}