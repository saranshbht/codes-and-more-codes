#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	ll x, y;
	cin >> t;
	while (t--) {
		cin >> x >> y;
		if (x - y == 1) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}