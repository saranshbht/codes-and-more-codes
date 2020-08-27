#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b;
	long long k;
	cin >> t;
	while (t--) {
		cin >> k >> a >> b;
		long long sum = a + b;
		long long s = (a + b) % 10;
		if (k >= 3 && s) {
			if (s & 1) {
				k -= 3;
				sum += s;
			} else {
				k -= 2;
			}
			while (k % 4) {
				sum += sum % 10;
				k--;
			}
			sum += 1ll * (k / 4) * 20;
		}
		cout << ((sum % 3) ? "NO" : "YES") << endl;
	}
	return 0;
}