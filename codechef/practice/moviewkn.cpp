#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool myComp(const pair<pair<int, int>, int> &a, const pair<pair<int, int>, int> &b) {
	if (a.first.first * a.first.second == b.first.first * b.first.second) {
		if (a.first.second == b.first.second) {
			return a.second < b.second;
		}
		return a.first.second > b.first.second;
	}
	return a.first.first * a.first.second > b.first.first * b.first.second;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<pair<pair<int, int>, int> > v;
		int arr[n], brr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> brr[i];
		}
		for (int i = 0; i < n; i++) {
			v.push_back(make_pair(make_pair(arr[i], brr[i]), i + 1));
		}
		sort(v.begin(), v.end(), myComp);
		cout << v[0].second << endl;
	}

	return 0;
}