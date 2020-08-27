#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M 998244353

long long _exp(long long b, long long e) {
	long long res = 1;
	while (e) {
		if (e & 1) {
			res = res * b % M;
		}
		e >>= 1;
		b = b * b % M;
	}
	return res;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<long long> x_powers(n);
		x_powers[0] = 1;
		long long prev = 1;
		for (int i = 1; i < n; i++) {
			prev = (prev * x) % M;
			x_powers[i] = (prev + x_powers[i - 1]) % M;
		}

		// for (auto &i : x_powers) {
		// 	cout << i << " ";
		// }
		// cout << endl;
		long long res = 1;
		for (int i = 0; i < n; i++) {
			long long w = arr[i] * x_powers[i] % M;
			res = res * _exp(w, 2 * (n - i)) % M;
		}
		cout << res << endl;
	}

	return 0;
}