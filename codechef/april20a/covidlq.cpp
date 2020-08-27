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
		bool arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int i = 0;
		while (!arr[i++]);
		int count = 0;
		for (; i < n; i++) {
			if (arr[i]) {
				// cout << count << endl;
				if (count < 5) {
					break;
				}
				count = 0;
			} else {
				count++;
			}
		}
		if (i != n) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}

	return 0;
}