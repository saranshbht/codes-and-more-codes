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
		int maxm = INT_MIN, count = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == 'L') {
				count++;
			} else {
				maxm = max(maxm, count);
				count = 0;
			}
		}
		maxm = max(maxm, count);
		cout << maxm + 1 << endl;
	}

	return 0;
}