#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	vector<int> diff(n);
	for (int i = 0; i < n; i++) {
		diff[i] = a[i] - b[i];
	}
	sort(diff.begin(), diff.end());
	long long count = 0, i;
	for (i = 0; i < n; i++) {
		if (diff[i] <= 0) {
			count += diff.end() - upper_bound(diff.begin(), diff.end(), -1 * diff[i]);
		} else {
			break;
		}
	}
	// cout << count << endl;
	long long x = n - i;
	count += x * (x - 1) / 2;
	cout << count << endl;

	return 0;
}