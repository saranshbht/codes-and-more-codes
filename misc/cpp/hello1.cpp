#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll k = 1000000000000ll;
	int n = 12323;
	ll s = k % (3 * n);
	ll t = k % (n * 3);
	k %= n * 3;
	cout << s << " " << t << " " << k << endl;

	return 0;
}