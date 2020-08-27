#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	string arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int maxm = -1;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1]) {
			count++;
		} else {
			maxm = max(maxm, count);
			count = 1;
		}
	}
	cout << max(maxm, count) << endl;
	return 0;
}