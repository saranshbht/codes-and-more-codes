#include<bits/stdc++.h>
using namespace std;
#define endl '\n'


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<int> brr(n);
		brr[0] = arr[0];
		for (int i = 1; i < n; i++) {
			brr[i] = min(arr[i], brr[i - 1]);
		}

		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] == brr[i]) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}