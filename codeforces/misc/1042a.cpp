#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int maxm = arr[0];
	for (int i = 1; i < n; i++) {
		maxm = max(maxm, arr[i]);
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += maxm - arr[i];
	}
	if (sum >= m) {
		cout << maxm << " " << maxm + m;
	} else {
		int rem = m - sum;
		if (rem % n) {
			cout << maxm + rem / n + 1 << " " << maxm + m;
		} else {
			cout << maxm + rem / n << " " << maxm + m;
		}
	}
	cout << endl;
	return 0;
}