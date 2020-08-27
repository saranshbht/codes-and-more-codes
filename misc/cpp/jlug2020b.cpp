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
		char t[n + 1];
		t[n] = 0;
		for (int i = 0; i < n; i++) {
			t[i] = s[i] + 1;
			if (t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u') {
				t[i] -= 32;
			}
		}
		cout << t << endl;
	}

	return 0;
}