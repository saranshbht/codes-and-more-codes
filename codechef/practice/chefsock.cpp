#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	c -= a;
	c /= b;
	if (c & 1) {
		cout << "Unlucky Chef";
	} else {
		cout << "Lucky Chef";
	}
	cout << endl;

	return 0;
}