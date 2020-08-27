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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cout << sum + arr[i] << " ";
		sum += max(0, arr[i]);
	}
	cout << endl;
	return 0;
}