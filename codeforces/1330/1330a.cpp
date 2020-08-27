#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, x, a;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		set<int> s;
		for (int i = 0; i < n; i++) {
			cin >> a;
			s.insert(a);
		}
		int i = 1;
		while (x > 0) {
			if (s.find(i) == s.end()) {
				x--;
			}
			i++;
		}
		while (s.find(i) != s.end()) {
			i++;
		}
		cout << --i << endl;
	}

	return 0;
}