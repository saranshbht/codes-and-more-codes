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
	int upper = 0, lower = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			lower++;
		} else {
			upper++;
		}

	}
	if (lower < upper) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	} else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	cout << s << endl;

	return 0;
}