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
	int i;
	for (i = 0; i < n; i++)
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			break;
		}
	if (i != n) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << endl;
	return 0;
}