#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int div = 4;
		while (div < n) {
			double nx = n / (double)(div - 1);
			if (nx == (int)nx) {
				break;
			}
			div <<= 1;
		}
		cout << n / (div - 1) << endl;
	}

	return 0;
}