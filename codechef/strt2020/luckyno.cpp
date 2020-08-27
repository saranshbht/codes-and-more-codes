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
		vector<int> v;
		while (n > 0) {
			v.push_back(n % 10);
			n /= 10;
		}
		sort(v.begin(), v.end());
		int k = v.size();
		if (k == 1) {
			cout << "YES";
		} else {
			int i;
			for (i = 1; i < k; i++) {
				// cout << v[i] - v[i - 1] << endl;
				if (v[i] - v[i - 1] > 2) {
					break;
				}
			}
			if (i != k) {
				cout << "NO";
			} else {
				cout << "YES";
			}
		}
		cout << endl;
	}

	return 0;
}