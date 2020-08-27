#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)

ll p[200001], res[200001];

ll power(ll x, ll y = M - 2) {
	ll res = 1;
	x = x % M;
	while (y > 0) {
		if (y & 1) {
			res = (res * x) % M;
		}
		y >>= 1;
		x = (x * x) % M;
	}
	return res;
}

void computeP() {
	p[1] = 1;
	for (int i = 2; i < 200001; i++) {
		if (!p[i]) {
			p[i] = i - 1;
			for (int j = 2 * i; j < 200001; j += i) {
				if (!p[j]) {
					p[j] = j;
				}
				p[j] = (p[j] / i) * (i - 1);
			}
		}
	}
}

void computeRes() {
	computeP();
	for (int i = 1; i < 200001; i++) {
		for (int j = 2; i * j < 200001; j++) {
			res[i * j] += i * p[j];
		}
	}
	for (int i = 2; i < 200001; i++) {
		res[i] += res[i - 1];
	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	computeRes();
	ll q, n, k;
	cin >> q >> k;
	while (q--) {
		cin >> n;
		//cout << res[n] << endl;
		cout << ((res[n] % M) * (power(n * (n - 1) / 2))) % M << endl;
	}

	return 0;
}