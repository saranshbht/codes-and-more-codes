#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	int arr[7];
	cin >> n;
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		sum += arr[i];
	}
	n = n % sum;
	if (n) {
		for (int i = 0; i < 7; i++) {
			if (n <= arr[i]) {
				cout << i + 1;
				break;
			} else {
				n -= arr[i];
			}
		}

	} else {
		for (int i = 6; i >= 0; i--) {
			if (arr[i]) {
				cout << i + 1;
				break;
			}
		}

	}
	cout << endl;
	return 0;
}