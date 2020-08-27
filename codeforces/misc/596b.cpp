#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

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
	ll sum  = 0;
	ll last = 0;
	int i = 0;
	if (arr[i] < 0) {
		sum += -arr[i];
		last = arr[i];
	}
	while (i < n - 1) {
		while (i < n - 1 && arr[i + 1] >= arr[i]) {
			i++;
		}
		sum += arr[i] - last;
		last = arr[i];
		while (i < n - 1 && arr[i + 1] < arr[i]) {
			i++;
		}
		sum += last - arr[i];
		last = arr[i];
	}
	//cout << i << endl;
	cout << sum << endl;
	return 0;
}