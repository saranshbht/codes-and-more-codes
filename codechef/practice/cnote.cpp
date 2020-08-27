#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, x, y, n, k, a, b;
	cin >> t;
	while (t--) {
		cin >> x >> y >> k >> n;
		bool flag = false;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			if (!flag && a >= x - y && b <= k) {
				flag = true;
			}
		}
		if (flag) {
			cout << "LuckyChef";
		} else {
			cout << "UnluckyChef";
		}
		cout << endl;
	}

	return 0;
}