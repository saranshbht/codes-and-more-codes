#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a;
	cin >> m;
	vector<int> arr(m);
	for (int i = 0; i < m; i++) {
		cin >> arr[i];
	}
	cin >> n;
	while (n--) {
		cin >> a;
		cout << arr[a - 1] << endl;
		arr.erase(arr.begin() + a - 1);
	}
	return 0;
}