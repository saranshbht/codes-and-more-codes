#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int zero = 0, minusOne = 0, one = 0, others = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a == 0) {
				zero++;
			} else if (a == -1) {
				minusOne++;
			} else if (a == 1) {
				one++;
			} else {
				others++;
			}
		}
		if (others > 1) {
			cout << "no";
		} else if (minusOne > 1 && one == 0) {
			cout << "no";
		} else if (minusOne && others) {
			cout << "no";
		} else {
			cout << "yes";
		}
		cout << endl;
	}

	return 0;
}