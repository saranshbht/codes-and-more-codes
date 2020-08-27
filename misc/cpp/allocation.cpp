#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int subset(vector<int> &arr, int i, int b) {
	int n = arr.size();
	if (b < -1) {
		return -1;
	}
	if (i == n || b == 0) {
		return 0;
	}
	return max(1 + subset(arr, i + 1, b - arr[i]), subset(arr, i + 1, b));
	// return max(subset(arr, i + 1, b - arr[i]), subset(arr, i + 1, b));
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> b;
		vector<int> arr(n);
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		vector<vector<int> > subset(b + 1, vector<int> (n + 1, -1));
		for (int j = 0; j <= n; j++) {
			subset[0][j] = 0;
		}
		for (int j = 1; j <= b; j++) {
			for (int k = 1; k <= n; k++) {
				subset[j][k] = subset[j][k - 1];
				if (j >= arr[j - 1]) {
					subset[j][k] = max(subset[j][k], subset[j - arr[j - 1]][k - 1] + 1);
				}
			}
		}
		cout << "Case #" << i << ": " << subset[b][n] << endl;
	}

	return 0;
}