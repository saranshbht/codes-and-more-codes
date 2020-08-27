#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	ll k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		if ((n & 1) && k > n) {
			arr[n / 2] = 0;
		}
		k %= n * 3;
		int count = 0;
		while (count < k) {
			int x = count % n;
			arr[x] ^= arr[n - x - 1];
			count++;
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}