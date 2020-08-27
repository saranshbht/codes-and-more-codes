#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a != c && b != d) {
		cout << 2;
	} else {
		cout << 1;
	}
	cout << " ";
	int dr = abs(a - c);
	int dc = abs(b - d);
	if ((dr + dc) & 1) {
		cout << 0;
	} else if (dr == dc) {
		cout << 1;
	} else {
		cout << 2;
	}
	cout << " ";
	cout << max(dr, dc) << endl;

	return 0;
}