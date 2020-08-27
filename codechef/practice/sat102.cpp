#include<bits/stdc++.h>
using namespace std;
#define endl "\n";

int maxChoco(vector<vector<int> > &arr) {
	int n = arr.size();
	int m = arr[0].size();
	int totalCost[n][m];
	totalCost[0][0] = arr[0][0];
	for (int i = 1; i < n; i++)
		totalCost[i][0] = totalCost[i - 1][0] + arr[i][0];
	for (int i = 1; i < m; i++)
		totalCost[0][i] = totalCost[0][i - 1] + arr[0][i];
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			totalCost[i][j] = max(totalCost[i - 1][j - 1], max(totalCost[i - 1][j], totalCost[i][j - 1])) + arr[i][j];
		}
	}
	return totalCost[n - 1][m - 1];
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		vector<vector<int> > arr(n, vector<int>(m));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> arr[i][j];
		cout << maxChoco(arr) << endl;
	}

	return 0;
}