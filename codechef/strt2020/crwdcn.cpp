#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	long long n, x, y, z;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> x >> y >> z;
		long long lcm = (x * y) / __gcd(x, y);
		lcm = (lcm * z) / __gcd(lcm, z);
		cout << (n * 24) / lcm << endl;
	}

	return 0;
}