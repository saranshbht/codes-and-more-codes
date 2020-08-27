#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
// bool compare(pair<ll, ll> &a, pair<ll, ll> &b){
//     if(a.first == b.first)
//         return a.second >= b.second;
//     return a.first < b.first;
// }


//THE FUCK IS WRONG WITH YOUR COMPILER, ITS GIVING DIFFERENT OUTPUT THAN MINE.
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		pair<ll, ll> a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i].first >> a[i].second;
		}
		ll minm = __LONG_LONG_MAX__;
		int i = 1;
		ll total = 0;
		for (; i < n; i++) {
			ll diff = max(0LL, a[i].first - a[i - 1].second);
			minm = min(minm, a[i].first - diff);
			total += max(0LL, diff);
		}
		ll diff = max(0LL, a[0].first - a[n - 1].second);
		minm  = min(minm, a[0].first - diff);
		total += max(0LL, diff);
		cout << total + minm << endl;
	}

	return 0;
}