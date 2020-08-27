#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll nCr(ll n, ll r) {
	if (r > n - r) {
		r = n - r;
	}
	ll ans = 1;
	for (int i = 1; i <= r; i++) {
		ans *= n - r + i;
		ans /= i;
	}
	return ans;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int last = arr[k - 1];
		int total = count(arr, arr + n, last);
		int toSelect = count(arr, arr + k, last);
		cout << nCr(total, toSelect) << endl;

	}

	return 0;
}