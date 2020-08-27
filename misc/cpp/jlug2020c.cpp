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
		long long ans = 0;
		long long k = 1;
		for (int i = n - 1; i >= 0; i--) {
			if (s[i] >= '0' && s[i] <= '9') {
				ans += k * (int)(s[i] - 48);
			} else {
				ans += k * (int)(s[i] - 55);
			}
			k *= 16;
		}
		cout << ans << endl;
	}

	return 0;
}