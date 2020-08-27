#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	ll k;
	cin >> n >> k;
	int ans = 1;
	while ((k & 1) == 0) {
		ans++;
		k >>= 1;
	}
	cout << ans << endl;
	return 0;
}