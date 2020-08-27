#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, h, p;
	cin >> t;
	while (t--) {
		cin >> h >> p;
		int total = 0;
		while (p) {
			total += p;
			p >>= 1;
		}
		cout << (int)(total >= h) << endl;
	}

	return 0;
}