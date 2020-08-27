#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, a, r;
	cin >> n >> m >> a >> r;
	pair<int, int> arr[m];
	for (int i = 0; i < m; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	cout << m << endl;
	for (int i = 0; i < m; i++) {
		cout << 1 << " " << 1 << " " << arr[i].first << " " << arr[i].second << endl;
	}
	return 0;
}