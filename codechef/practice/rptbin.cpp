#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

vector<vector<int> > divisors(64, vector<int>());

int lg(long long n) {
	int ans = 0;
	while (n) {
		ans++;
		n >>= 1;
	}
	return ans;
}

long long fun(long long n) {
	if (n <= 1)
		return 0;
	long long ans = 0;
	int len = lg(n);
	ans += fun((1ll << (len - 1)) - 1);
	vector<long long> g(32, 0);
	for (auto &i : divisors[len]) {
		long long t = n >> (len - i);
		long long p = 0;
		for (int j = 0; j < len / i; j++)
			p = (p << i) + t;
		if (p <= n)
			g[i]++;
		g[i] += t - (1ll << (i - 1));
		for (auto &j : divisors[i])
			g[i] -= g[j];
		ans += g[i];
	}
	return ans;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	for (int i = 1; i < 64; i++) {
		for (int j = 1; j < i; j++)
			if (i % j == 0)
				divisors[i].push_back(j);
	}
	long long l, r;
	cin >> l >> r;
	cout << fun(r) - fun(l - 1) << endl;
	return 0;
}