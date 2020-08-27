#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		int count = 0;
		while (n % 10 == 0) {
			n /= 10;
			count++;
		}
		int i = -1;
		if (__builtin_popcount(n) == 1) {
			i = 0;
			while (!(n & 1)) {
				i++;
				n >>= 1;
			}
		}
		// cout << count << " " << i << endl;
		if (i != -1 && i <= count) {
			cout << "Yes";
		} else {
			cout << "No";
		}
		cout << endl;
	}

	return 0;
}