#include<bits/stdc++.h>
using namespace std;

int main() {
	int q, n, k, s;
	cin >> q;
	while (q--) {
		cin >> n >> k;
		vector<int> v;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s & 1) {
				v.push_back(i + 1);
			}
		}
		// cout << v.size() << endl;
		// for(int &i : v)
		//     cout << i << endl;
		if (v.size() < k) {
			cout << "NO";
		} else if ((v.size() & 1) != (k & 1)) {
			cout << "NO";
		} else {
			cout << "YES\n";
			for (int i = 1; i < k; i++) {
				cout << v[i - 1] << " ";
			}
			cout << n;
		}
		cout << endl;
	}
	return 0;
}