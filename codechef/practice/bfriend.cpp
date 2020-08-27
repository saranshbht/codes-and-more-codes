#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	long long a, b, c;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> c;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long minm = LONG_LONG_MAX;
		for (int i = 0; i < n; i++) {
			minm = min(minm, abs(arr[i] - a) + abs(arr[i] - b));
		}
		cout << minm + c << endl;
	}

	return 0;
}