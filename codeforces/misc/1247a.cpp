#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;
	if (b - a > 1 || b - a < 0) {
		cout << -1;
	} else {
		if (b == a) {
			cout << b << 0 << " " << a << 1;
		} else {
			cout << a << 9 << " " << b << 0;
		}
	}
	cout << endl;
	return 0;
}