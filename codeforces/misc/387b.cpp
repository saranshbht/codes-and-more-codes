#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int arr[n], brr[m];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> brr[i];
	}
	sort(arr, arr + n);
	sort(brr, brr + m);
	int k = m - 1, count = 0;
	for (int i = n - 1; i >= 0 && k >= 0; i--) {
		if (arr[i] <= brr[k]) {
			count++;
			k--;
		}
	}
	cout << n - count << endl;
	return 0;
}