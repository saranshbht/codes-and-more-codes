#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, d;
	cin >> t;
	while (t--) {
		cin >> n >> d;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int sum = arr[0];
		for (int i = 1; i < n; i++) {
			if (i * arr[i] <= d) {
				d -= i * arr[i];
				sum += arr[i];
			} else {
				sum += d / i;
				break;
			}
		}
		cout << sum << endl;
	}

	return 0;
}