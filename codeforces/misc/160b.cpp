#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	char arr[n], brr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	sort(arr, arr + n);
	sort(brr, brr + n);
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] >= brr[i]) {
			break;
		}
	//cout << i << endl;
	if (i == n) {
		cout << "YES";
	} else {
		for (i = 0; i < n; i++)
			if (arr[i] <= brr[i]) {
				break;
			}
		if (i == n) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	cout << endl;

	return 0;
}