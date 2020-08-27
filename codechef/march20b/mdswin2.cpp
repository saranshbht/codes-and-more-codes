#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)998244353
long long fact[100001];
long long exp(long long b, long long e) {
	long long res = 1;
	while (e) {
		if (e & 1) {
			res = (res * b) % M;
		}
		e >>= 1;
		b = (b * b) % M;
	}
	return res;
}

long long modInv(long long a) {
	return exp(a, M - 2);
}

long long nCr(long long n, long long r) {
	if (r == 0) {
		return 1;
	}
	return fact[n] * modInv(fact[r]) % M * modInv(fact[n - r]) % M;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	fact[0] = 1;
	for (int i = 1; i < 100001; i++) {
		fact[i] = (fact[i - 1] * i) % M;
	}

	int t, n, q, l, r;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> q;
		for (int i = 0; i < q; i++) {
			cin >> l >> r;
			map<int, int> mp;
			int Xor = 0;
			for (int i = l - 1; i < r; i++) {
				mp[arr[i]]++;
			}
			long long ans = 0;
			if (mp.size() == 1) {
				ans = 1;
			} else {
				for (auto &i : mp) {
					Xor ^= i.second;
				}
				for (auto &i : mp) {
					int x = Xor ^ i.second;
					if (x < i.second) {
						ans = (ans + nCr(i.second, x)) % M;
					}
				}
			}
			cout << ans << endl;
		}
	}

	return 0;
}