#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b;
	cin >> n;
	// for(int i = 0; i < n; i++){
	//     cin >> a >> b;
	// }
	vector<pair<int, int> > v;
	for (int i = 2; i < 2 * n; i *= 2) {
		for (int j = 1; j < n; j += i) {
			if (j + (i / 2) <= n) {
				v.push_back(make_pair(j, j + (i / 2)));
			}
		}
	}
	int k = v.size();
	cout << k << endl;
	for (int i = 0; i < k; i++) {
		cout << 2 << " " << v[i].first << " " << v[i].second << endl;
	}
	return 0;
}