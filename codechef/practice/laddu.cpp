#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, acts, rank, severity;
	string origin, activity;
	cin >> t;
	while (t--) {
		cin >> acts >> origin;
		int cnt = 0;
		while (acts--) {
			cin >> activity;
			if (activity == "CONTEST_WON") {
				cin >> rank;
				cnt += 300 + max(0, 20 - rank);
			} else if (activity == "TOP_CONTRIBUTOR") {
				cnt += 300;
			} else if (activity == "BUG_FOUND") {
				cin >> severity;
				cnt += severity;
			} else {
				cnt += 50;
			}
		}
		if (origin == "INDIAN") {
			cout << cnt / 200;
		} else {
			cout << cnt / 400;
		}
		cout << endl;
	}

	return 0;
}