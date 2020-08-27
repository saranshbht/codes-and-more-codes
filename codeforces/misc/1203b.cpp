#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int q, n, size;
	cin >> q;
	while (q--) {
		cin >> n;
		size = 4 * n;
		int arr[size];
		for (int i = 0; i < size; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + size);
		int i;
		for (i = 0; i < size; i += 2)
			if (arr[i] != arr[i + 1]) {
				break;
			}
		if (i < size) {
			cout << "NO" << endl;
			continue;
		}
		int x = arr[0] * arr[size - 1];
		for (i = 2; i < (size / 2); i += 2)
			if (arr[i] * arr[size - i - 1] != x) {
				break;
			}
		if (i < size / 2) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		// cout << count(arr, arr + size, 1) << endl;
		// cout << count (arr, arr + size, 7) << endl;
		cout << endl;
	}

	return 0;
}