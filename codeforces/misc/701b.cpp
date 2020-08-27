#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	set<int> row;
	set<int> col;
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		row.insert(i);
		col.insert(i);
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		row.erase(a);
		col.erase(b);
		cout << (long long)row.size() * col.size() << " ";
	}
	cout << endl;

	return 0;
}