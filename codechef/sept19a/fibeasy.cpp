#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	int t;
	int arr[60];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i < 60; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10;
	}
	ll n;
	cin >> t;
	while (t--) {
		cin >> n;
		ll index = 1;
		while (n > 1) {
			n >>= 1;
			index <<= 1;
		}
		index %= 60;
		cout << arr[index - 1] << endl;
	}

	return 0;
}