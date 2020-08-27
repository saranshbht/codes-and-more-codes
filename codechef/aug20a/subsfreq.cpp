#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)(1e9 + 7)
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> res(n);
		long long val = 1;
		for (int i = 1; i <= n; i++) {
			res[n - i] = val;
			val = (val << 1) % M;
		}
		for (int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;

	}

	return 0;
}