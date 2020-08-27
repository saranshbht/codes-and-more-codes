#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n, a, b, c, d, e;
	ll mugs = 0, towels = 0, bags = 0, bicycles = 0, cars = 0, left = 0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> a >> b >> c >> d >> e;
	for (int i = 0; i < n; i++) {
		left += arr[i];
		if (left >= e) {
			cars += left / e;
			left %= e;
		}
		if (left >= d) {
			bicycles += left / d;
			left %= d;
		}
		if (left >= c) {
			bags += left / c;
			left %= c;
		}
		if (left >= b) {
			towels += left / b;
			left %= b;
		}
		if (left >= a) {
			mugs += left / a;
			left %= a;
		}
	}
	cout << mugs << " " << towels << " " << bags << " " << bicycles << " " << cars << "\n" << left << "\n";
	return 0;
}