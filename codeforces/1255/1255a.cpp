#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int k = abs(a - b);
		int count = 0;
		count += k / 5;
		k %= 5;
		count += k / 2;
		k %= 2;
		count += k;
		cout << count << endl;
	}

	return 0;
}