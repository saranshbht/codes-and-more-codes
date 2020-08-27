#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, bx, m, by;
	cin >> n >> bx;
	int arr[n] = {0};
	for (int i = n - 1; i >= 0; i--) {
		cin >> arr[i];
	}
	cin >> m >> by;
	int brr[m] = {0};
	for (int i = m - 1; i >= 0; i--) {
		cin >> brr[i];
	}
	ll x = 0, y = 0;
	ll multiplierx = 1, multipliery = 1;
	for (int i = 0; i < n; i++) {
		x += arr[i] * multiplierx;
		multiplierx *= bx;
	}
	for (int i = 0; i < m; i++) {
		y += brr[i] * multipliery;
		multipliery *= by;
	}
	//cout << x << " " << y << endl;
	if (x == y) {
		cout << "=";
	} else if (x > y) {
		cout << ">";
	} else {
		cout << "<";
	}
	cout << endl;

	return 0;
}