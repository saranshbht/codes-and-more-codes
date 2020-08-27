#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, st;
	char m;
	long long totalProfit = 0;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[4][4];
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				arr[i][j] = 0;
		for (int i = 0; i < n; i++) {
			cin >> m >> st;
			arr[m - 'A'][st / 4]++;
		}
		// for (int i = 0; i < 4; i++) {
		//  for (int j = 0; j < 4; j++) {
		//      cout << arr[i][j] << " ";
		//  }
		//  cout << endl;
		// }
		long long profit = LONG_LONG_MIN, sum;
		int idx1[] = {0, 1, 2, 3};
		int idx2[] = {0, 1, 2, 3};
		do {
			do {
				sum = arr[idx1[0]][idx2[0]] * 100 + arr[idx1[1]][idx2[1]] * 75 + arr[idx1[2]][idx2[2]] * 50 + arr[idx1[3]][idx2[3]] * 25;
				for (int i = 0; i < 4; i++)
					if (arr[idx1[i]][idx2[i]] == 0)
						sum -= 100;
				profit = max(profit, sum);
			} while (next_permutation(idx1, idx1 + 4));
		} while (next_permutation(idx2, idx2 + 4));
		cout << profit << endl;
		totalProfit += profit;
	}
	cout << totalProfit << endl;
	return 0;
}