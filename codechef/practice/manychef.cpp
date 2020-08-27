#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int n = s.size();
		char arr[n + 1];
		strcpy(arr, s.c_str());
		for (int i = n - 4; i >= 0; i--) {
			if (arr[i] != 'C' && arr[i] != '?') {
				continue;
			}
			if (arr[i + 1] != 'H' && arr[i + 1] != '?') {
				continue;
			}
			if (arr[i + 2] != 'E' && arr[i + 2] != '?') {
				continue;
			}
			if (arr[i + 3] != 'F' && arr[i + 3] != '?') {
				continue;
			}
			arr[i] = 'C'; arr[i + 1] = 'H'; arr[i + 2] = 'E'; arr[i + 3] = 'F';
		}
		for (int i = 0; i < n; i++) {
			if (arr[i] == '?') {
				cout << 'A';
			} else {
				cout << arr[i];
			}
		}
		cout << endl;
	}

	return 0;
}