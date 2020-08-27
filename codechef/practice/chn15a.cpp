#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, a;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int count = 0;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if ((a + k) % 7 == 0) {
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}