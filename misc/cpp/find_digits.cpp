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
		int m = n;
		int count = 0;
		while (m) {
			int res = m % 10;
			m /= 10;
			if (res == 0) {
				continue;
			}
			if (n % res == 0) {
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}