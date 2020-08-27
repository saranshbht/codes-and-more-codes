#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (int)(1e9 + 7)
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
		int sum = 0;
		sort(arr.begin(), arr.end(), greater<int>());
		for (int i = 0; i < n; i++) {
			sum = (sum + max(arr[i] - i, 0)) % M;
		}
		cout << sum << endl;
	}

	return 0;
}