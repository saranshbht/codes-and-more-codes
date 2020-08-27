#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long long sum[n];
	sum[0] = arr[0];
	for (int i = 1; i < n; i++) {
		sum[i] = sum[i - 1] + arr[i];
	}
	if (sum[n - 1] != 0) {
		cout << -1;
	} else {
		int prev = -1, i;
		vector<int> v;
		map<int, int> mp;
		bool flag = true;
		for (i = 0; i < n; i++) {
			if (arr[i] < 0) {
				if (!(mp[-arr[i]] & 1)) {
					break;
				}
				mp[-arr[i]]++;
			} else {
				mp[arr[i]]++;
			}
			if (sum[i] == 0) {
				for (auto &a : mp) {
					if (a.second != 2) {
						flag = false;
						break;
					}
				}
				if (!flag) {
					break;
				}
				v.push_back(i - prev);
				prev = i;
				mp.clear();
			}
		}
		if (i != n) {
			cout << -1;
		} else {
			int k = v.size();
			cout << k << endl;
			for (int i = 0; i < k; i++) {
				cout << v[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}