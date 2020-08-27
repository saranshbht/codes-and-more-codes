#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a;
	set<int> s;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	vector<int> v;
	for (int i = 1; true ; i++) {
		if (s.find(i) == s.end()) {
			if (m >= i) {
				v.push_back(i);
				m -= i;
			} else {
				break;
			}
		}
	}
	n = v.size();
	cout << n << endl;
	for (auto &i : v) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}