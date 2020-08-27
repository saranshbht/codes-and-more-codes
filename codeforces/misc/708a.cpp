#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	int n = s.size();
	int i = 0;
	while (i < n && s[i] == 'a') {
		i++;
	}
	if (i == n) {
		for (int i = 1; i < n; i++) {
			cout << 'a';
		}
		cout << 'z';
	} else {
		for (i = 0; i < n; i++) {
			if (s[i] != 'a') {
				cout << (char)(s[i] - 1);
			} else {
				break;
			}
		}
		if (i == 0) {
			while (i < n && s[i] == 'a') {
				cout << s[i++];
			}
			for (; i < n; i++) {
				if (s[i] != 'a') {
					cout << (char)(s[i] - 1);
				} else {
					break;
				}
			}
		}
		for (; i < n; i++) {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}