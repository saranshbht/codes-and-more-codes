#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k;
	string s;
	cin >> s >> k;
	int n = s.size();
	if (k > n) {
		cout << "NO";
	} else if (k == n) {
		cout << "YES";
	} else if (n % k != 0) {
		cout << "NO";
	} else {
		int len = n / k;
		int i;
		for (i = 0; i < n; i += len) {
			string k = s.substr(i, len);
			reverse(s.begin() + i, s.begin() + i + len);
			if (k != s.substr(i, len)) {
				break;
			}
		}
		if (i < n) {
			cout << "NO";
		} else {
			cout << "YES";
		}
	}
	cout << endl;

	return 0;
}