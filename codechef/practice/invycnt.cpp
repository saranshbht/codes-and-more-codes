#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	ll n, k, count;
	cin >> t;
	while (t--) {
		ll inv = 0, total = 0;
		cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			count = 0;
			for (int j = 0; j < n; j++) {
				if (arr[i] > arr[j]) {
					count++;
				}
			}
			total += count * k * (k - 1) / 2;
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++)
				if (arr[i] > arr[j]) {
					inv++;
				}
		}
		cout << total + inv * k << endl;
	}

	return 0;
}