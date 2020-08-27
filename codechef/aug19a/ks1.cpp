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
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long countPairs = 0;
		int newArr[n] = {0};
		newArr[0] = arr[0];
		for (int i = 1; i < n; i++) {
			newArr[i] = newArr[i - 1] ^ arr[i];
		}
		unordered_map<int, pair<long long, long long> > mp;
		for (int i = 0; i < n; i++) {
			if (mp.find(newArr[i]) != mp.end()) {
				countPairs += mp[newArr[i]].first * (i - 1) - mp[newArr[i]].second;
				mp[newArr[i]].first++;
				mp[newArr[i]].second += i;
			} else {
				mp[newArr[i]] = make_pair(1, i);
			}
			if (newArr[i] == 0) {
				countPairs += i;
			}

		}
		cout << countPairs << endl;
	}
	return 0;
}