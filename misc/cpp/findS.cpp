#include<iostream>
using namespace std;

int findS(int s) {
	if (s == 1) {
		return s;
	}
	if (s <= 2) {
		return -1;
	}
	if (s == 3) {
		return 2;
	}

	int l = 1, r = s / 2;

	while (l <= r) {
		int mid = (l + r) / 2;
		int sum = mid * (mid + 1) / 2;

		if (sum == s) {
			return mid;
		} else if (sum > s) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << findS(n) << "\n";
	}
	return 0;
}