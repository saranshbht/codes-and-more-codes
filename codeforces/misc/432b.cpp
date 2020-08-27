#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int x, arr[n];
	int res[n];
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> x >> arr[i];
		mp[x]++;
	}
	for (int i = 0; i < n; i++) {
		if (mp.find(arr[i]) != mp.end()) {
			res[i] = n - 1 - mp[arr[i]];
		} else {
			res[i] = n - 1;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << 2 * n - 2 - res[i] << " " << res[i] << endl;
	}
	return 0;
}