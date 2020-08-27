#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)998244353

long long _exp(long long b, long long e = M - 2) {
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

	int t;
	string s;
	vector<int> w(26, 0);

	cin >> t;

	while (t--) {
		cin >> s;
		int n = s.size();
		for (int i = 0; i < 26; i++) {
			cin >> w[i];
		}
		vector<long long> pre_weights(n);
		pre_weights[0] = w[s[0] - 'a'];
		for (int i = 1; i < n; i++) {
			pre_weights[i] = w[s[i] - 'a'] + pre_weights[i - 1];
		}

		vector<string> repeat;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				string str = s.substr(i, j - i + 1);
				string repeated(str);
				while (repeated.size() < n) {
					repeated += str;
				}
				repeat.push_back(repeated);
			}
		}

		// for (int i = 0; i < repeat.size(); i++) {
		//  cout << i << " " << repeat[i] << endl;
		// }

		map<pair<int, int>, int> res;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				for (int k = 0; k <= j - i; k++) {
					int idx = n * (n + 1) / 2 - (n - i) * (n - i + 1) / 2 + k;
					string str = repeat[idx];
					if (s.compare(i, j - i + 1, str, 0, j - i + 1) == 0) {
						res[make_pair(i, i + k)]++;
					}
				}
			}
		}

		long long p = 0;
		for (auto &i : res) {
			// cout << i.first.first << " " << i.first.second << " " << i.second << endl;
			if (i.first.first) {
				p = (p + ((pre_weights[i.first.second] - pre_weights[i.first.first - 1]) % M * i.second % M)) % M;
			} else {
				p = (p + (pre_weights[i.first.second] % M * i.second % M)) % M;
			}
		}
		long long q = 1ll * n * (n + 1) / 2 % M;
		cout << p * _exp(q) % M << endl;
	}

	return 0;
}