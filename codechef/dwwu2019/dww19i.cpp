#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int g = 0;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			g = __gcd(g, a);
			sum += a;
		}
		cout << g << " " << sum / g << endl;
	}

	return 0;
}