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
		int arr[n], brr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> brr[i];
		}
		vector<pair<int, int> > s;
		for (int i = 0; i < n; i++) {
			if (arr[i] != brr[i]) {
				s.push_back(make_pair(i, brr[i] - arr[i]));
			}
		}
		if (s.size() == 0) {
			cout << "YES";
		} else {
			sort(s.begin(), s.end());
			int n = s.size(), i;
			int pos = s[0].first, k = s[0].second;
			for (i = 1; i < n; i++) {
				if (s[i].first != pos + i || s[i].second != k) {
					break;
				}
			}
			if (i == n) {
				if (k > 0) {
					cout << "YES";
				} else {
					cout << "NO";
				}
			} else {
				cout << "NO";
			}
		}
		cout << endl;
	}

	return 0;
}