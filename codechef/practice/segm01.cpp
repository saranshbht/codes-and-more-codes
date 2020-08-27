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
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				while (i < n && s[i] == '1') {
					i++;
					cnt++;
				}
				break;
			}

		}
		if (cnt != 0 && cnt == count(s.begin(), s.end(), '1'))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}

	return 0;
}