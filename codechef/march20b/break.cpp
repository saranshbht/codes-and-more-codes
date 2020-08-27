#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, s, n;
	cin >> t >> s;
	while (t--) {
		cin >> n;
		vector<int> a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		if (s == 1) {
			unordered_set<int> s;
			int i = 0;
			s.insert(a[0]);
			s.insert(b[0]);
			for (; i < n; i++) {
				if (b[i] <= a[i] || s.find(a[i]) == s.end()) {
					break;
				}
				s.insert(a[i]);
				s.insert(b[i]);
			}
			if (i != n) {
				cout << "NO";
			} else {
				cout << "YES";
			}
		} else {
			int i = 0;
			int previ = -1;
			while (previ != i) {
				previ = i;
				unordered_set<int> s;
				s.insert(a[i]);
				s.insert(b[i]);
				for (; i < n; i++) {
					if (b[i] <= a[i] || s.find(a[i]) == s.end()) {
						break;
					}
					s.insert(a[i]);
					s.insert(b[i]);
				}
				if (previ == i) {
					break;
				}
				if (i != n) {
					swap(a, b);
				} else {
					break;
				}
			}
			if (i != n) {
				cout << "NO";
			} else {
				cout << "YES";
			}
		}
		cout << endl;
	}
	return 0;
}