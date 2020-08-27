#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, y;
	cin >> n >> x >> y;
	string str;
	cin >> str;
	reverse(str.begin(), str.end());
	int count = 0;
	for (int i = 0; i < x; i++) {
		if (i == y) {
			if (str[i] == '0') {
				count++;
			}
		} else if (str[i] == '1') {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}