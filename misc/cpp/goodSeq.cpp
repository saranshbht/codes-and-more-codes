#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, count = 0;
		cin >> n >> m;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int size = 1;
		while (size < n) {
			for (int i = 0; i < n - size + 1; i++) {
				int sum = 0;
				for (int j = i; j < size + i; j++) {
					sum += arr[j];
				}
				if (sum % m == 0) {
					count++;
				}
			}
			size++;
		}
		cout << count << "\n";
	}
	return 0;
}