#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> v(arr, arr + n);
	sort(v.begin(), v.end(), greater<int>());
	int sum = 0;
	map<int, int> mp;
	for (int i = 0; i < k; i++) {
		sum += v[i];
		mp[v[i]]++;
	}

	cout << sum << endl;
	vector<int> res;
	int last = -1;
	for (int i = 0; i < n; i++) {
		if (mp[arr[i]] > 0) {
			mp[arr[i]]--;
			res.push_back(i - last);
			last = i;
		}
	}
	int l = n - 1 - last + res[res.size() - 1];
	res.pop_back();
	res.push_back(l);
	int size = res.size();
	for (int i = 0; i < size; i++) {
		cout << res[i] << " ";
	}
	cout << endl;
	return 0;
}