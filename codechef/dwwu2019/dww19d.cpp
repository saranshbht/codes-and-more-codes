#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	ll k;
	while (t--) {
		cin >> n >> k;
		ll arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		ll sum = arr[0], maxSum = -1;
		int l = 0, right = -1, left = -1;
		for (int i = 1; i < n; i++) {
			if ((sum <= k) && (sum > maxSum)) {
				maxSum = sum;
				right = i - 1;
				left = l;
			}
			while ((sum + arr[i] > k) && (l < i)) {
				sum -= arr[l];
				l++;
			}
			sum += arr[i];
		}
		if ((sum <= k) && (sum > maxSum)) {
			maxSum = sum;
			right = n - 1;
			left = l;
		}
		if (maxSum == -1) {
			cout << -1;
		} else {
			cout << ++left << " " << ++right << " " << maxSum;
		}
		cout << endl;
	}
	return 0;
}