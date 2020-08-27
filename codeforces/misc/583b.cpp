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
	int count = 0;
	int dir = 0;
	while (1) {
		for (int i = 0; i < n; i++) {
			if (arr[i] <= count) {
				arr[i] = INT_MAX;
				count++;
			}
		}
		if (count == n) {
			break;
		} else {
			dir++;
		}
		for (int i = n - 1; i >= 0; i--) {
			if (arr[i] <= count) {
				arr[i] = INT_MAX;
				count++;
			}
		}
		if (count == n) {
			break;
		} else {
			dir++;
		}
	}
	cout << dir << endl;
	return 0;
}