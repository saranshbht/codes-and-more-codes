#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int sum_of_digits(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n;
		int chef = 0, morty = 0;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			int sum_a = sum_of_digits(a);
			int sum_b = sum_of_digits(b);
			if (sum_a > sum_b) {
				chef++;
			} else if (sum_a < sum_b) {
				morty++;
			} else {
				chef++; morty++;
			}
		}
		if (chef > morty) {
			cout << 0 << " " << chef;
		} else if (chef < morty) {
			cout << 1 << " " << morty;
		} else {
			cout << 2 << " " << chef;
		}
		cout << endl;
	}

	return 0;
}