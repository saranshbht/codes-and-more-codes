#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)(1e9 + 7)

int f(long long n) {
	string str = to_string(n);
	int strsize = str.size();
	long long ans = str[0] - '0';
	for (int i = 1; i < strsize; i++) {
		ans *= 10;
		if (str[i] != str[i - 1]) {
			ans += str[i] - '0';
		}
	}
	return ans % M;
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, nr, nl;
	long long l, r;
	cin >> t;
	while (t--) {
		cin >> nl >> l >> nr >> r;
		int e = 0;
		long long ans = 0;
		for (long long i = l; i <= r; i++) {
			ans = (ans + f(i)) % M;
		}
		cout << ans << endl;
	}

	return 0;
}