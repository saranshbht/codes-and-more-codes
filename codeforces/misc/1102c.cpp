#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, y;
	cin >> n >> x >> y;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	if (y < x) {
		cout << n;
	} else {
		int count = 0;
		for (int i = 0; i < n; i++)
			if (arr[i] <= x) {
				count++;
			}
		cout << ++count / 2;
	}
	cout << endl;
	return 0;
}