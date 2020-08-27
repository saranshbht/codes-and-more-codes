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
	if (count(arr, arr + n, 1) == n) {
		cout << n - 1;
	} else {
		int maxm = 0, maxi, maxj, count;
		for (int i = 0; i < n; i++) {
			count = 0;
			for (int j = i; j < n; j++) {
				if (arr[j]) {
					count--;
				} else {
					count++;
				}
				if (count > maxm) {
					maxm = count;
					maxi = i;
					maxj = j;
				}
			}
		}
		maxm += (maxj - maxi - maxm + 1) / 2;
		for (int i = 0; i < maxi; i++)
			if (arr[i]) {
				maxm++;
			}
		for (int i = maxj + 1; i < n; i++)
			if (arr[i]) {
				maxm++;
			}
		cout << maxm;
	}
	cout << endl;
	return 0;
}