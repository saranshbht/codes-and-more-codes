#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, c;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		string s;
		cin >> s;
		vector<int> cnt(26, 0);
		for (int i = 0; i < n; i++) {
			cnt[s[i] - 'a']++;
		}
		for (int i = 0; i < q; i++) {
			cin >> c;
			long long sum = 0;
			for (int i = 0; i < 26; i++) {
				sum += max(0, cnt[i] - c);
			}
			cout << sum << endl;
		}
	}

	return 0;
}