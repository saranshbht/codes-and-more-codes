#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, t;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int i, count1, count2;
		for (i = 0; i < n; i++)
			if (s[i] != '<') {
				break;
			}
		count1 = i;
		for (i = n - 1; i >= 0; i--)
			if (s[i] != '>') {
				break;
			}
		count2 = n - 1 - i;
		if (count1 == n || count2 == n || count1 == 0 || count2 == 0) {
			cout << 0;
		} else {
			cout << min(count1, count2);
		}
		cout << endl;
	}

	return 0;
}