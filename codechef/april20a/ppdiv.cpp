#include<bits/stdc++.h>
using namespace std;
using namespace std:: chrono;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)

// ll exp(ll b, ll e){
//     ll ans = 1;
//     while(e){
//         if(e & 1)
//             ans *= b;
//         e >>= 1;
//         b *= b;
//     }
//     return ans;
// }

// ll expMod(ll b, ll e){
//     ll ans = 1;
//     b = b % M;
//     while(e){
//         if(e & 1)
//             ans = (ans * b) % M;
//         e >>= 1;
//         b = b * b % M;
//     }
//     return ans;
// }

int main() {
	// ios_base :: sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);
	auto start = high_resolution_clock::now();
	unordered_set<ll> ppow;
	for (ll i = 2; i <= 10000; i++) {
		for (ll j = i * i; j <= (ll)(1e12); j *= i) {
			ppow.insert(j);
		}
	}
	cout << ppow.size() << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << endl;
	int t;
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		auto start = high_resolution_clock::now();
		ll ans = n % M;
		for (auto &i : ppow) {
			// if(i > n)
			//     continue;
			ans = (ans + i * (n / i)) % M;
		}
		ll i = 10001;
		ll p = i * i;
		while (p <= n) {
			if (ppow.find(p) == ppow.end()) {
				ans = (ans + p * (n / p)) % M;
			}
			p += ((i << 1) | 1);
			i++;
		}
		cout << ans << endl;
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		cout << duration.count() << endl;
	}

	return 0;
}