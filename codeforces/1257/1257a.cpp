#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, x, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> x >> a >> b;
		cout << min(n - 1, abs(a - b) + x) << endl;
	}

	return 0;
}