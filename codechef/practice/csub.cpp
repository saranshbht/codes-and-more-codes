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
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] - '0') {
				count++;
			}
		}
		cout << 1ll * count * (count + 1) / 2 << endl;
	}

	return 0;
}