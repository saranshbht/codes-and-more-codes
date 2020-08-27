#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int k, n;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i, count = 0;
	for (i = 0; i < k; i++) {
		if (arr[i] == 1) {
			count++;
		}
	}
	int flips = 0;
	return 0;
}