#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n], brr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> brr[i];
		}
		int maxm = 0;
		for (int i = 0; i < n; i++) {
			maxm = max(maxm, arr[i] * 20 - brr[i] * 10);
		}
		cout << maxm << endl;
	}
	return 0;
}