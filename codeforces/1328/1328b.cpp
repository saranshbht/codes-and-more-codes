#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<long long> v(100001);
	for (int i = 0; i <= 100000; i++) {
		v[i] = (long long)i * (i + 1) / 2;
	}
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<char> vec(n, 'a');
		int idx = lower_bound(v.begin(), v.end(), k) - v.begin();
		// cout << idx;
		int index = idx - (v[idx] - k + 1);
		vec[n - idx - 1] = 'b';
		vec[n - index - 1] = 'b';
		for (int i = 0; i < n; i++) {
			cout << vec[i];
		}
		cout << endl;
	}

	return 0;
}