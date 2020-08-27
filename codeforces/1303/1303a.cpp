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
		int i, j;
		for (i = 0; i < n; i++) {
			if (s[i] == '1') {
				break;
			}
		}
		// cout << i << endl;
		if (i == n) {
			cout << 0 << endl;
			continue;
		}
		for (j = n - 1; j >= 0; j--) {
			if (s[j] == '1') {
				break;
			}
		}
		// cout << j << endl << endl;
		int count = 0;
		for (int k = i + 1; k < j; k++)
			if (s[k] == '0') {
				count++;
			}
		cout << count << endl;
	}

	return 0;
}