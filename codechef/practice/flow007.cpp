#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int rev = 0;
		while (n) {
			rev = rev * 10 + n % 10;
			n /= 10;
		}
		cout << rev << endl;
	}

	return 0;
}