#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	ll l, r;
	cin >> t;
	while (t--) {
		cin >> l >> r;
		string lstr = bitset<64>(l).to_string();
		string rstr = bitset<64>(r).to_string();
		string res = "";
		int i = 0;
		for (; i < 64; i++) {
			if (lstr[i] != rstr[i]) {
				break;
			}
			res += rstr[i];
		}
		for (; i < 64; i++) {
			res += '1';
		}
		cout << strtoll(res.c_str(), nullptr, 2) << endl;
	}
	return 0;
}