#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	ll n, k;
	ll sum = 0;
	cin >> n >> k;
	ll sumn = n * (n + 1) / 2;
	for (ll i = k; i <= n; i++) {
		ll sumk = i * (i - 1) / 2;
		ll nk = n - i;
		ll sumnk = nk * (nk + 1) / 2;
		// cout << sumnk << endl;
		sum += (sumn - sumnk - sumk + 2 * M + 1) % M;
		// cout << sum << endl;
	}
	cout << (sum  + 1) % M << endl;
	return 0;
}