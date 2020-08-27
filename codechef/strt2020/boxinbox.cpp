#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int u = 0, d = n - 1;
	int sum = 0;
	while (u <= d) {
		int minm = INT_MAX;
		for (int i = u; i <= d; i++) {
			minm = min(minm, arr[u][i]);
			minm = min(minm, arr[d][i]);
			minm = min(minm, arr[i][u]);
			minm = min(minm, arr[i][d]);
		}
		sum += minm;
		u++;
		d--;
	}
	cout << sum << endl;

	return 0;
}