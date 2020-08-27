#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string arr[3];
	for (int i = 0; i < 3; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 3);
	if (arr[0] == arr[1]) {
		if (arr[1] == arr[2]) {
			cout << 0;
		} else {
			cout << 1;
		}
	} else if (arr[1] == arr[2]) {
		cout << 1;
	} else if (arr[0][1] == arr[1][1] && arr[0][0] + 1 == arr[1][0]) {
		if (arr[1][1] == arr[2][1] && arr[1][0] + 1 == arr[2][0]) {
			cout << 0;
		} else {
			cout << 1;
		}
	} else if ((arr[0][1] == arr[2][1] && (arr[0][0] + 2 == arr[2][0] || arr[0][0] + 1 == arr[2][0])) || (arr[0][1] == arr[1][1] && arr[0][0] + 2 == arr[1][0])) {
		cout << 1;
	} else if (arr[1][1] == arr[2][1] && (arr[1][0] + 1 == arr[2][0] || arr[1][0] + 2 == arr[2][0])) {
		cout << 1;
	} else {
		cout << 2;
	}
	cout << endl;
	return 0;
}