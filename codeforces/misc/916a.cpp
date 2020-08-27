#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x, h, m;
	cin >> x >> h >> m;
	if (h % 10 == 7 || h / 10 % 10 == 7 || m % 10 == 7 || m / 10 % 10 == 7) {
		cout << 0;
	} else {
		int i = 1, sub;
		while (1) {
			if (x > m) {
				if (h == 0) {
					h = 23;
				} else {
					h--;
				}
				m = 60 - (x - m);
			} else {
				m -= x;
			}
			if (h % 10 == 7 || h / 10 % 10 == 7 || m % 10 == 7 || m / 10 % 10 == 7) {
				break;
			}
			i++;
		}
		cout << i;
	}
	cout << endl;
	return 0;
}