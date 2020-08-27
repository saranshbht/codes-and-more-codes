#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			sum += a % k;
		}
		cout << sum % k << endl;
	}

	return 0;
}