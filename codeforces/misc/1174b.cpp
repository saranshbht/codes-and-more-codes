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
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i;
	for (i = 1; i < n; i++)
		if ((arr[i] & 1) != (arr[i - 1] & 1)) {
			break;
		}
	if (i < n) {
		sort(arr, arr + n);
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	} else {
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	return 0;
}