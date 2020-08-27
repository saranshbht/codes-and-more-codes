#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, m;
	cin >> n >> q;
	set<int> s;
	int a, b;
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		s.insert(a);
		s.insert(b);
	}
	int size = s.size();
	while (q--) {
		cin >> m;
		if (s.size() % m == 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}