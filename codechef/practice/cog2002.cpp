#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int maxm = INT_MIN;
		for (int i = 0; i < n - 2; i++) {
			maxm = max(maxm, arr[i] + arr[i + 1] + arr[i + 2]);
		}
		cout << maxm << endl;
	}

	return 0;
}