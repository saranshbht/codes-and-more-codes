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
		int n = s.size(), a, b;
		int i = 0;
		while (i < n && s[i] == '.')
			i++;
		if (i != n)
			a = s[i++] - '0';
		int count = 0;
		for (; i < n; i++) {
			if (s[i] == '.')
				count++;
			else {
				b = s[i] - '0';
				if (count < a + b)
					break;
				a = b;
				count = 0;
			}
		}
		if (i == n)
			cout << "safe";
		else
			cout << "unsafe";
		cout << endl;
	}

	return 0;
}