#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int k, n;
	cin >> k;
	while (k--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n, greater<int>());
		int maxm = INT_MIN;
		for (int i = 0; i < n; i++) {
			maxm = max(maxm, min(i + 1, arr[i]));
		}
		cout << maxm << endl;
	}

	return 0;
}