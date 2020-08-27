#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, a;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		int arr[n + 1];
		arr[0] = -1;
		for (int i = 0; i < n; i++) {
			cin >> a;
			arr[i + 1] = max(arr[i], a);
		}
		for (int i = 0; i < q; i++) {
			cin >> a;
			cout << arr[a] << endl;
		}
	}

	return 0;
}