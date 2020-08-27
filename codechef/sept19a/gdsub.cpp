#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)
map<int, int> mp;
map<pair<int, int>, ll> f;

ll rec(int i, int k, int n) {
	if (f.count(make_pair(i, k))) {
		return f[make_pair(i, k)];
	}
	if (k < 0) {
		return 0;
	}
	if (i == n) {
		if (k >= 0) {
			f[make_pair(i, k)] = 1;
			return 1;
		} else {
			f[make_pair(i, k)] = 0;
			return 0;
		}
	}
	f[make_pair(i, k)] = (rec(i + 1, k, n) + mp[i] * rec(i + 1, k - 1, n)) % M;
	return f[make_pair(i, k)];
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, a;
	cin >> n >> k;
	map<int, int> temp;
	for (int i = 0; i < n; i++) {
		cin >> a;
		temp[a]++;
	}

	a = temp.size();
	int i = 0;
	for (auto &m : temp) {
		mp[i++] = m.second;
	}

	cout << rec(0, k, a) << endl;
	return 0;
}