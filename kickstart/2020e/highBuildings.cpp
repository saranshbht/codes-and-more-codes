#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b, c;
	cin >> t;
	for (int cases = 1; cases <= t; cases++) {
		cin >> n >> a >> b >> c;
		cout << "Case #" << cases << ": ";
		if (a < c || b < c || a + b - c > n) {
			cout << "IMPOSSIBLE";
		} else {
			deque<int> q;
			for (int i = 0; i < c; i++) {
				q.push_back(n);
			}
			for (int i = 0; i < (a - c); i++) {
				q.push_front(n - 1 - i);
			}
			for (int i = 0; i < (n - a - b + c); i++) {
				q.push_back(1);
			}
			for (int i = 0; i < (b - c); i++) {
				q.push_back(n - 1 - i);
			}
			// if (q.back() <= 1)
			// 	cout << "IMPOSSIBLE";
			// else
			for (auto &i : q) {
				cout << i << " ";
			}
		}
		cout << endl;

	}

	return 0;
}