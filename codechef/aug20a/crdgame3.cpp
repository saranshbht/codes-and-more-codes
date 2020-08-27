#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, pc, pr;
	cin >> t;
	while (t--) {
		cin >> pc >> pr;
		int pcd = pc / 9 + !!(pc % 9);
		int prd = pr / 9 + !!(pr % 9);
		if (pcd < prd) {
			cout << 0 << " " << pcd;
		} else {
			cout << 1 << " " << prd;
		}
		cout << endl;
	}

	return 0;
}