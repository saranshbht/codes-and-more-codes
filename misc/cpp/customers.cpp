#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long max = -1, sum;
	for (int i = 0; i < n; i++) {
		sum = (n - i) * arr[i];
		if (sum > max) {
			max = sum;
		}
	}
	cout << max << endl;
	return 0;
}