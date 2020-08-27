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
	sort(arr, arr + n);
	if (arr[0] > 1) {
		arr[0] = 1;
	}
	for (int i = 1; i < n; i++)
		if (arr[i] > arr[i - 1] + 1) {
			arr[i] = arr[i - 1] + 1;
		}
	cout << arr[n - 1] + 1 << endl;
	return 0;
}