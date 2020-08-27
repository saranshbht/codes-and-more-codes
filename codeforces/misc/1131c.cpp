#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int arr[n];
	int brr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	if (n <= 3) {
		for (int i = 0; i < n; i++) {
			brr[i] = arr[i];
		}
	} else {
		int k = 0, i;
		for (i = 0; i < n; i += 2) {
			brr[k++] = arr[i];
		}
		if (n & 1) {
			i = n - 2;
		} else {
			i = n - 1;
		}
		for (; i >= 0; i -= 2) {
			brr[k++] = arr[i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << brr[i] << " ";
	}
	cout << endl;
	return 0;
}