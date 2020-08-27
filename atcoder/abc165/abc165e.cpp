#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int start = 1, end = n;
	for (int i = 1; i < m; i++) {
		cout << start << " " << end << endl;
		start = start + 1;
		end = end - 1;
	}
	if (!(n & 1)) {
		start++;
	}
	cout << start << " " << end << endl;
	return 0;
}