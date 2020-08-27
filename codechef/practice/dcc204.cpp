#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		long long arr[n], count = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int> odds;
		odds.push_back(-1);
		for (int i = 0; i < n; i++) {
			if (arr[i] & 1) {
				odds.push_back(i);
			}
		}
		if (v.size() < k) {
			cout << 0;
		} else {
			int count = v[k] - k;
			for (int i = k; i < v.size(); i++) {

			}
			cout << count;
		}
		cout << endl;
	}
	return 0;
}