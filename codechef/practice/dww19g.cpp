#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q;
	long long x;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		cin >> q;
		long long r = 0, w;
		while (q--) {
			cin >> x;
			w = x ^ r;
			int k = arr.size();
			for (int i = 0; i < k; i++) {
				if (arr[i] < w) {
					r++;
				}
			}
			arr.push_back(w);
		}
		cout << r << endl;
	}

	return 0;
}