#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	string str;
	cin >> str;
	if (str[a - 1] == str[b - 1]) {
		cout << 0;
	} else {
		cout << 1;
	}
	cout << endl;

	return 0;
}