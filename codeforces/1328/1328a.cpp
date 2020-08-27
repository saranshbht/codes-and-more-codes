#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a % b == 0) {
			cout << 0;
		} else {
			int d = a / b;
			cout << b * (d + 1) - a;
		}
		cout << endl;
	}

	return 0;
}