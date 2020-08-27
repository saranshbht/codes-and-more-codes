#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + n);
		int min = INT_MAX;
		for (int i = 0; i < n - 1; i++)
			if (arr[i + 1] - arr[i] < min) {
				min = arr[i + 1] - arr[i];
			}
		cout << min << endl;
	}
}