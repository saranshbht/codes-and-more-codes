#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int arr[n];
		long sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}

		for (int i = 0; i < n; i++)
			cout << sum - arr[i] << " ";
		cout << "\n";
	}
	return 0;
}
