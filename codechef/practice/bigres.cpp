#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int x[n], y[n];
		for (int i = 0; i < n; i++) {
			cin >> x[i] >> y[i];
		}
		sort(y, y + n);
		int differ[n];
		differ[0] = x[1] - x[0];
		for (int i = 1; i < n - 1; i++) {
			differ[i] = x[i + 1] - x[i - 1];
		}
		differ[n - 1] = x[n - 1] - x[n - 2];
		sort(differ, differ + n);
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += 1LL * differ[i] * y[i];
		}
		cout << sum << endl;
	}


	return 0;
}