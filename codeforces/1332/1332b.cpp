#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> arr(n), brr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			for (int j = 2; j * j <= arr[i]; j++) {
				if (arr[i] % j == 0) {
					brr[i] = j;
					if (mp.find(j) == mp.end()) {
						int k = mp.size();
						mp[j] = k + 1;
					}
					break;
				}
			}
		}
		// for (auto &i : brr) {
		//  cout << i << " ";
		// }
		// cout << endl;
		cout << mp.size() << endl;
		for (int i = 0; i < n; i++) {
			cout << mp[brr[i]] << " ";
		}
		cout << endl;
	}

	return 0;
}