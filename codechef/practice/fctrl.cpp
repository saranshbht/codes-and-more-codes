#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		long long ans = 0;
		for (long long i = 5; i <= n; i *= 5) {
			ans += n / i;
		}
		cout << ans << endl;
	}

	return 0;
}