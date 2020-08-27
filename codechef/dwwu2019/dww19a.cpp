#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	int arr[] = {0, 1, 7, 8, 5, 4, 9, 2, 3, 6};
	string n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n.size() == 1) {
			if (n == "0") {
				cout << "false";
			} else {
				cout << "true";
			}
		} else {
			int s = n.size(), i;
			int half = s / 2;
			for (i = 0; i < half; i++) {
				if (n[i] == '0' || n[s - i - 1] == '0') {
					break;
				}
				if (arr[n[i] - '0'] != (n[s - i - 1] - '0')) {
					break;
				}
			}
			if (i == half) {
				if (n[i] == '0') {
					cout << "false";
				} else {
					cout << "true";
				}
			} else {
				cout << "false";
			}
		}
		cout << endl;
	}


	return 0;
}