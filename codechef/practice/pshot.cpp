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
		string s;
		cin >> s;
		int a = 0, b = 0;
		int i = 0;
		while (i < 2 * n) {
			if (s[i] == '1') {
				a++;
			}
			i++;
			if (a > b) {
				if ((a - b) > (2 * n - i) / 2 + 1) {
					break;
				}
			} else {
				if ((b - a) > (2 * n - i) / 2) {
					break;
				}
			}
			// if(abs(a - b) > ((2 * n - i) / 2 + 1))
			//     break;
			if (s[i] == '1') {
				b++;
			}
			i++;
			if (abs(a - b) > ((2 * n - i) / 2)) {
				break;
			}
		}
		cout << i << endl;
	}

	return 0;
}