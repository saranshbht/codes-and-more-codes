#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int a;
		int Xor = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			Xor ^= a;
		}
		if (Xor) {
			cout << "First";
		} else {
			cout << "Second";
		}
		cout << endl;
	}

	return 0;
}