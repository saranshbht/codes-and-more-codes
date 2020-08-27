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
		int i;
		int count = 0;
		int start = 0;
		for (i = 0; i < n; i++) {
			if (s[i] == '<') {
				if (count == 0) {
					start = i;
				}
				count++;
			} else {
				if (count == 0) {
					break;
				}
				count--;
			}
		}
		if (count) {
			cout << start << endl;
		} else {
			cout << i << endl;
		}
	}

	return 0;
}