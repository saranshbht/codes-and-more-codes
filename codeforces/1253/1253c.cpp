#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int sumOdd[n] {0};
	sumOdd[0] = arr[0];
	long long sumArr[n];
	for (int i = 0; i < m; i++) {
		sumArr[i] = arr[i];
	}
	for (int i = m; i < n; i++) {
		sumArr[i] = arr[i] + sumArr[i - m];
	}
	// long long sum[n];
	// sum[0] = arr[0];
	// for(int i = 1; i < n; i++)
	//     sum[i] = sum[i - 1] + arr[i];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += sumArr[i];
		cout << sum << " ";
	}
	cout << endl;
	return 0;
}