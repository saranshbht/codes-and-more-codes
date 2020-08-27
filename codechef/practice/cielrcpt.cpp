#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, p;
	cin >> t;
	while (t--) {
		cin >> p;
		int count = 0;
		for (int i = 11; i > -1; i--) {
			if (p == 0) {
				break;
			}
			count += (p >> i);
			p %= (1 << i);
			// cout << count << endl;
		}
		cout << count << endl;
	}

	return 0;
}