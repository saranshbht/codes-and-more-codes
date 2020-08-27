#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int maxm = INT_MIN;
		int count = 0, i;
		for (i = 0; i < n; i++)
			if (s[i] == 'A') {
				break;
			}
		for (; i < n; i++) {
			if (s[i] == 'P') {
				count++;
			} else {
				maxm = max(maxm, count);
				count = 0;
			}
		}
		maxm = max(maxm, count);
		cout << maxm << endl;
	}

	return 0;
}