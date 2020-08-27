#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int arr[128] {0};
	for (int i = 2; i < 128; i++) {
		int key = arr[i - 1], j;
		for (j = i - 2; j >= 0; j--) {
			if (arr[j] == key) {
				break;
			}
		}
		if (j == -1) {
			arr[i] = 0;
		} else {
			arr[i] = i - 1 - j;
		}
	}
	// for(int i = 0; i < 128; i++)
	//     cout << arr[i] << " ";
	// cout << endl;
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << count(arr, arr + n, arr[n - 1]) << endl;
	}

	return 0;
}