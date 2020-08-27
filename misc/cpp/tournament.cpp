#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long arr[n];
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (i == 0)
			continue;
		for (int j = i - 1; j >= 0; j--)
			sum += abs(arr[j] - arr[i]);
	}

	cout << sum << endl;
	return 0;
}