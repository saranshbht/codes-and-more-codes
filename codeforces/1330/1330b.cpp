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
		vector<int> arr(n), brr(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			brr[arr[i]]++;
		}
		// for (int i = 0; i < n; i++) {
		//  cout << brr[i] << " ";
		// }
		// cout << endl;
		int i;
		for (i = 2; i < n; i++) {
			if (brr[i] > 2 || brr[i] > brr[i - 1]) {
				break;
			}

		}
		if (brr[1] > 2) {
			i = -1;
		}
		if (i != n) {
			cout << 0 << endl;
		} else {
			int i;
			int two = -1, one = -1;
			for (i = 1; i < n; i++) {
				if (two == -1 && brr[i] == 1) {
					two = i - 1;
				} else if (two == -1 && brr[i] == 0) {
					two = one = n / 2;
					break;
				} else if (one == -1 && brr[i] == 0) {
					one = i - 1;
					break;
				}
			}
			if (one == -1) {
				one = n - 1;
			}
			// cout << one << " " << two << endl;
			vector<int> v(arr.begin(), arr.begin() + two);
			sort(v.begin(), v.end());
			// for (int i = 0; i < v.size(); i++) {
			//  cout << v[i] << " ";
			// }
			// cout << endl;
			for (i = 0; i < v.size(); i++)
				if (v[i] != i + 1) {
					break;
				}
			int count = 0;
			if (i == v.size()) {
				count++;
			}
			// cout << count << endl;
			vector<int> vc(arr.begin(), arr.begin() + one);
			sort(vc.begin(), vc.end());
			for (i = 0; i < vc.size(); i++) {
				if (vc[i] != i + 1) {
					break;
				}
			}
			if (i == vc.size()) {
				if (count == 1) {
					cout << 2 << endl;
					cout << vc.size() << " " << n - vc.size() << endl;
					cout << n - vc.size() << " " << vc.size() << endl;
				} else {
					cout << 1 << endl;
					cout << vc.size() << " " << n - vc.size() << endl;
				}
			} else {
				if (count == 1) {
					cout << 1 << endl;
					cout << v.size() << " " << n - v.size() << endl;
				} else {
					cout << 0 << endl;
				}
			}

		}

	}

	return 0;
}