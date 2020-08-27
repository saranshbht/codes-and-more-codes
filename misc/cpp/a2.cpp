#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int arr[3];
		cin >> arr[0] >> arr[1] >> arr[2];
		sort(arr, arr + 3);
		int ans = 0;
		if (arr[0] + arr[1] <= arr[2]) {
			ans += arr[0] + arr[1];
		} else {
			ans += arr[2];
			int sum = arr[0] + arr[1] - arr[2];
			ans += sum / 2;
		}
		cout << ans << endl;

	}

	return 0;
}