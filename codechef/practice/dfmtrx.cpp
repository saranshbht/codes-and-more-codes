#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<vector<int> > matrix(n, vector<int>(n));
		cout << "Hooray" << endl;
		for (int i = 0; i < n; i++) {
			matrix[i][i] = 2 * n - 1;
		}
		for (int i = 0; i < n; i++) {
		}
	}

	return 0;
}