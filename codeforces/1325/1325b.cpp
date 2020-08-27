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
		int a;
		set<int> s;
		for (int i = 0; i < n; i++) {
			cin >> a;
			s.insert(a);
		}
		cout << s.size() << endl;

	}

	return 0;
}