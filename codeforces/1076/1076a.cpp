#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	cin >> n >> s;
	char maxm = CHAR_MIN;
	for (int i = 0; i < n; i++) {
		maxm = max(maxm , s[i]);
	}
	int i;
	n--;
	for (i = 0; i < n; i++) {
		if (s[i] > s[i + 1]) {
			break;
		} else {
			cout << s[i];
		}
	}
	if (i != n) {
		i++;
		n++;
		for (; i < n; i++) {
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}