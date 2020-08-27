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
	long long pre[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i == 0) {
			pre[i] = arr[i];
		} else {
			pre[i] = arr[i] + pre[i - 1];
		}
	}
	map<long long, int> mp;
	mp[0] = -1;
	int pos = -1;
	long long ans = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == 0) {
			pos = i;
		} else if (mp.find(pre[i]) != mp.end()) {
			if (pos < mp[pre[i]] + 1) {
				pos = mp[pre[i]] + 1;
			}
		}
		mp[pre[i]] = i;
		ans += i - pos;
		// cout << ans << endl;
	}
	cout << ans << endl;

	return 0;
}