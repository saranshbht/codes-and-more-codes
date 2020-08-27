#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	string arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	string pass;
	cin >> pass;
	int len = pass.size();
	int x = 0, y  = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i].size() == len) {
			y++;
		} else if (arr[i].size() < len) {
			x++;
		}
	}
	cout << (x + 1) + (x / k) * 5 << " " << (x + y) + ((x + y - 1) / k) * 5 << endl;
	return 0;
}