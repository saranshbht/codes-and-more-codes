#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int x;
	cin >> x;
	long long resa = 121, resb = 121;
	for (long long a = 1; a <= 120; a++) {
		for (long long b = 0; b <= 120; b++) {
			long long a5 = a * a * a * a * a;
			long long b5 = b * b * b * b * b;

			if (a5 - b5 == x) {
				resa = a; resb = b;
				break;
			}
			if (a5 + b5 == x) {
				resa = a; resb = -b;
				break;
			}
		}
		if (resa != 121) {
			break;
		}
	}
	cout << resa << " " << resb << endl;
	return 0;
}