#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	long long res = 0;
	for (int i = 1; i < n; i++) {
		res = __gcd(res, 1ll * arr[i] * arr[i - 1] / __gcd(arr[i], arr[i - 1]));
	}
	cout << res << endl;
	return 0;
}