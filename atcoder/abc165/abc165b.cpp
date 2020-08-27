#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long x;
	cin >> x;
	long long a = 100;
	long long count = 0;
	while (true) {
		if (a >= x) {
			break;
		}
		count++;
		a += a / 100;
		// cout << a << endl;
	}
	cout << count << endl;
	return 0;
}