#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int arr[n];
	map<int, int> mp;
	int maxm = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		maxm = max(maxm, arr[i]);
		mp[arr[i]]++;
	}
	long long dp[maxm + 1];
	dp[0] = 0;
	dp[1] = mp[1];
	for (int i = 2; i <= maxm; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + 1ll * i * mp[i]);
	}
	cout << dp[maxm] << endl;

	return 0;
}