#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > 1 && ((a & 1) == 0)) {
			count++;
		}
		if (count & 1) {
			cout << 1;
		} else {
			cout << 2;
		}
		cout << endl;
	}

	return 0;
}