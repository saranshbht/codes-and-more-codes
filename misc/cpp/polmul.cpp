#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		ll arr[n], brr[m], crr[n + m] = {0};
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> brr[i];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				crr[i + j] += arr[i] * brr[j];
			}
		}
		for (int i = 0; i < n + m - 1; i++) {
			cout << crr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}