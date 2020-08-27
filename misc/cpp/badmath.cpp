#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int power(int x, int y, int m) {
	int res = 1;
	x %= m;
	while (y > 0) {
		if (y & 1) {
			res = (res * x) % m;
		}
		y >>= 1;
		x = (x * x) % m;
	}
	return res;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> m >> s;
		int rem = 0;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			if (s[i] == '0') {
				rem = (rem * 2) % m;
			} else if (s[i] == '1') {
				rem = (rem * 2 + 1) % m;
			} else {
				rem = (rem * 2) % m;
				v.push_back(power(2, n - i - 1, m));
			}
		}
		int count = 0;
		if (rem % m == 0) {
			count++;
		}
		int k = v.size();
		for (int i = 1; i < (1 << k); i++) {
			int j = i;
			int temprem = rem;
			int idx = 0;
			while (j) {
				if (j & 1) {
					temprem = (temprem + v[idx]) % m;
				}
				idx++; j >>= 1;
			}
			if (temprem % m == 0) {
				count++;
			}
		}
		cout << count  << endl;
	}

	return 0;
}