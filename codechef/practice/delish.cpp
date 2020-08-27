#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
ll leftdelish[10001][2], rightdelish[10001][2];
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
		leftdelish[0][0] = leftdelish[0][1] = arr[0];
		for (int i = 1; i < n; i++) {
			leftdelish[i][0] = max(leftdelish[i - 1][0], 0ll) + arr[i];
			leftdelish[i][1] = min(leftdelish[i - 1][1], 0ll) + arr[i];
		}
		rightdelish[n - 1][0] = rightdelish[n - 1][1] = arr[n - 1];
		for (int i = n - 2; i >= 0; i--) {
			rightdelish[i][0] = max(rightdelish[i + 1][0], 0ll) + arr[i];
			rightdelish[i][1] = min(rightdelish[i + 1][1], 0ll) + arr[i];
		}
		ll res = -1;
		for (int i = 0; i < n - 1; i++) {
			res = max(res, abs(leftdelish[i][0] - rightdelish[i + 1][1]));
			res = max(res, abs(leftdelish[i][1] - rightdelish[i + 1][0]));
		}
		cout << res << endl;
	}

	return 0;
}