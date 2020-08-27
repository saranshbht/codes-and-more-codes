#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long ts;
	cin >> t;
	while (t--) {
		cin >> ts;
		while (!(ts & 1)) {
			ts >>= 1;
		}
		ts >>= 1;
		cout << ts;
		cout << endl;
	}

	return 0;
}