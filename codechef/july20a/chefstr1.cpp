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
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long sum = 0;
		for (int i = 1; i < n; i++) {
			sum += abs(arr[i] - arr[i - 1]) - 1;
		}
		cout << sum << endl;
	}
	return 0;
}