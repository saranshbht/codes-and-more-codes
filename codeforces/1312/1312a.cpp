#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (n % m == 0) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}