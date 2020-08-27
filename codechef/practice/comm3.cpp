#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, d, x1, x2, x3, y1, y2, y3;
	cin >> t;
	while (t--) {
		cin >> d >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int count = 0;
		if (abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2) > d * d) {
			count++;
		}
		if (abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3) > d * d) {
			count++;
		}
		if (abs(x2 - x3) * abs(x2 - x3) + abs(y2 - y3) * abs(y2 - y3) > d * d) {
			count++;
		}
		if (count > 1) {
			cout << "no";
		} else {
			cout << "yes";
		}
		cout << endl;
	}

	return 0;
}