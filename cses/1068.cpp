#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n;
	cin >> n;
	while (n > 1) {
		cout << n << " ";
		if (n & 1) {
			n = n * 3 + 1;
		} else {
			n >>= 1;
		}
	}
	cout << n << endl;

	return 0;
}