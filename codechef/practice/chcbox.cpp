#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, w;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int maxm = INT_MIN;
		for (int i = 0; i < n; i++) {
			maxm = max(maxm, arr[i]);
		}
		vector<int> pos;
		for (int i = 0; i < n; i++) {
			if (arr[i] == maxm) {
				pos.push_back(i);
			}
		}
		pos.push_back(n + pos[0]);
		int k = pos.size();
		int ans = 0;
		for (int i = 1; i < k; i++) {
			ans += max(0, pos[i] - pos[i - 1] - n / 2);
		}
		cout << ans << endl;
	}

	return 0;
}