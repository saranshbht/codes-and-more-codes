#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, odd = 0;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] % 2 != 0) {
				odd++;
			}
		}
		if (n == 1) {
			cout << 1 << "\n";
			continue;
		}

		else if (odd % 2 != 0) {
			cout << 2;
		} else {
			cout << 1;
		}
		cout << "\n";
	}
	return 0;
}