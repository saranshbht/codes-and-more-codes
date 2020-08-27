#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, s, a, b, c;
	cin >> t;
	while (t--) {
		cin >> s >> a >> b >> c;
		if (s >= a + b + c) {
			cout << 1;
		} else if ((s >= a + b) || (s >= b + c)) {
			cout << 2;
		} else {
			cout << 3;
		}
		cout << endl;
	}

	return 0;
}