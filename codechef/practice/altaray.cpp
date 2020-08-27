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
		int arr[n];
		int res[n] = {0};
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		for (int i = 1; i < n; i++) {
			if (arr[i] > 0 && arr[i - 1] > 0 || arr[i] < 0 && arr[i - 1] < 0) {
				res[i - 1] = 1;
			}
		}
		res[n - 1] = 1;
		for (int i = n - 2; i > -1; i--) {
			if (res[i] == 0) {
				res[i] = res[i + 1] + 1;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;
}