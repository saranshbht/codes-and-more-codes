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
	int maxm = -1;
	int cnt = 1;
	for (int i = 0; i < n - 1; i++) {
		if (arr[i + 1] > arr[i] * 2) {
			maxm = max(cnt, maxm);
			cnt = 1;
		} else {
			cnt++;
		}
	}
	cout << max(maxm, cnt) << endl;
	return 0;
}