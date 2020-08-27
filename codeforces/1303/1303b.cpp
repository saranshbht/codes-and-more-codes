#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long n, g, b;
	cin >> t;
	while (t--) {
		cin >> n >> g >> b;
		if (g >= n) {
			cout << n << endl;
			continue;
		}
		long long half = (n + 1) / 2;
		long long total = half + ((half + g - 1) / g - 1) * b;
		if (total > n) {
			cout << total;
		} else {
			cout << n;
		}
		cout << endl;
	}

	return 0;
}