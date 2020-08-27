#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
map<long long, vector<int>> mp;
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	long long sum = 0;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mp[arr[i]].push_back(i);
		sum += arr[i];
	}
	long long midsum;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		midsum = sum - arr[i];
		if (midsum & 1) {
			continue;
		}
		if (mp.find(midsum / 2) != mp.end() && !(binary_search(mp[midsum / 2].begin(), mp[midsum / 2].end(), i) && mp[midsum / 2].size() == 1)) {
			v.push_back(i + 1);
		}
	}
	if (v.size()) {
		cout << v.size() << endl;
		for (auto &i : v) {
			cout << i << " ";
		}
		cout << endl;
	} else {
		cout << 0 << endl;
	}

	return 0;
}