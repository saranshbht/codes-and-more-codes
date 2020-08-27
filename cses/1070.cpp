#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	} else if (n <= 3) {
		cout << "NO SOLUTION";
	} else if (n == 4) {
		cout << "3 1 4 2";
	} else {
		for (int i = 1; i <= n; i += 2) {
			cout << i << " ";
		}
		for (int i = 2; i <= n; i += 2) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}