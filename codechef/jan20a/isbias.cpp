#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q, l, r;
	cin >> n >> q;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	vector<int> pts;
	int i = 1;
	while (true) {
		while (i < n && arr[i] > arr[i - 1]) {
			i++;
		}
		if (i == n) {
			break;
		}
		pts.push_back(i - 1);
		while (i < n && arr[i] < arr[i - 1]) {
			i++;
		}
		if (i == n) {
			break;
		}
		pts.push_back(i - 1);
	}
	// for(auto &i : pts)
	//     cout << i << endl;
	while (q--) {
		cin >> l >> r;
		vector<int>::iterator lower, upper;
		lower = upper_bound(pts.begin(), pts.end(), l - 1);
		upper = lower_bound(pts.begin(), pts.end(), r - 1);
		int num = upper - lower;
		// cout << lower_bound(pts.begin(), pts.end(), -1) - pts.begin() << endl;
		// cout << *lower << " " << *upper << endl;
		if (num & 1) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}