#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	cin >> n >> str;
	int s = 0, maxm = 1;
	for (int i = 1; i < n; i++) {
		int l = i - 1;
		int h = i;
		while (l >= 0 && h < n && str[l] == str[h]) {
			if (h - l + 1 > maxm) {
				s = l;
				maxm = h - l + 1;
			}
			--l;
			h++;
		}
		l = i - 1;
		h = i + 1;
		while (l >= 0 && h < n && str[l] == str[h]) {
			if (h - l + 1 > maxm) {
				s = l;
				maxm = h - l + 1;
			}
			--l;
			h++;
		}
	}
	cout << maxm << endl;
	for (int i = s; i < s + maxm; i++) {
		cout << str[i];
	}
	cout << endl;
	return 0;
}