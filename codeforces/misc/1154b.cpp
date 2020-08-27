#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	unordered_set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s.insert(arr[i]);
	}
	if (s.size() > 3) {
		cout << -1;
	} else {
		if (s.size() == 1) {
			cout << 0;
		} else if (s.size() == 2) {
			auto it = s.begin();
			it++;
			int diff = abs(*s.begin() - *it);
			if (diff & 1) {
				cout << diff;
			} else {
				cout << diff / 2;
			}
		} else {
			vector<int> v(s.begin(), s.end());
			sort(v.begin(), v.end());
			if (v[1] - v[0] == v[2] - v[1]) {
				cout << v[1] - v[0];
			} else {
				cout << -1;
			}
		}
	}
	cout << endl;

	return 0;
}