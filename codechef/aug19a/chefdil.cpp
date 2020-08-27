#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	while (t--) {
		cin >> s;
		int size = s.size(), count = 0;
		for (int i = 0; i < size; i++)
			if (s[i] == '1') {
				count++;
			}
		if (count & 1) {
			cout << "WIN";
		} else {
			cout << "LOSE";
		}
		cout << endl;
	}
	return 0;
}