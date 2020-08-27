#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		int l = 0, r = n - 1;
		while (l < r) {
			if (s[l] != s[r]) {
				break;
			}
			l++;
			r--;
		}
		if (l >= r) {
			cout << s << endl;
			continue;
		}
		int l1 = l, r1 = r - 1;
		int lr = r1;
		while (l1 < r1) {
			if (s[l1] != s[r1]) {
				l1 = l;
				r1 = lr - 1;
				lr = r1;
				continue;
			}
			l1++;
			r1--;
		}
		// if(lr == l)
		//     lr--;
		int l2 = l + 1, r2 = r;
		int rl = l2;
		while (l2 < r2) {
			if (s[l2] != s[r2]) {
				r2 = r;
				l2 = rl + 1;
				rl = l2;
				continue;
			}
			l2++;
			r2--;
		}
		// if(rl == r)
		//     rl++;
		// if((l == 0) && (lr == -1) && (r == (n - 1)) && (rl == n)){
		//     cout << s[0] << endl;
		//     continue;
		// }
		if ((lr == l) && (rl == r)) {
			rl++;
		}
		for (int i = 0; i < l; i++) {
			cout << s[i];
		}
		if (lr + 1 > (n - rl)) {
			for (int i = l; i <= lr; i++) {
				cout << s[i];
			}
		} else {
			for (int i = rl; i <= r; i++) {
				cout << s[i];
			}
		}
		for (int i = r + 1; i < n; i++) {
			cout << s[i];
		}
		// cout << l << " " << lr << " " << r << " " << rl << endl;
		cout << endl;
	}

	return 0;
}