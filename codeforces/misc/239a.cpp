#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int y, n, k, x = 1;
	cin >> y >> k >> n;
	int last = n / k * k;
	int first = (y / k + 1) * k;
	if (first > n) {
		cout << -1;
	} else {
		for (int i = first; i <= last; i += k) {
			cout << i - y << " ";
		}
	}
	cout << endl;
	return 0;
}