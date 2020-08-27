#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
//what the fuck is happening?
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		if ((n & 1) == (k & 1)) {
			if (n >= k * k) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}