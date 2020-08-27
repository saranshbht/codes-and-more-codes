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
		cin >> s;
		cin >> a >> b >> c;
		if (a + b + c <= s) {
			cout << 1;
		} else if (a + b <= s || b + c <= s) {
			cout << 2;
		} else {
			cout << 3;
		}
		cout << endl;
	}

	return 0;
}