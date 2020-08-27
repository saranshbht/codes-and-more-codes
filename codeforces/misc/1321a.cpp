#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a = 0, b = 0;
	cin >> n;
	int arr[n];
	int brr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] == 1 && brr[i] == 0) {
			a++;
		} else if (arr[i] == 0 && brr[i] == 1) {
			b++;
		}
	}
	if (a == 0) {
		cout << -1;
	} else {
		cout << (b + a) / a;
	}
	cout << endl;

	return 0;
}