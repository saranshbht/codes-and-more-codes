#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> a >> b;
		int res = 1;
		for (int i = 2; i <= n; i++)
			res ^= i;
		cout << res << endl;
	}

	return 0;
}