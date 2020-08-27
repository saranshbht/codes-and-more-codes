#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, k;
	cin >> n >> m >> k;
	vector<pair<int, int> > source(k), dest(k);
	for (int i = 0; i < k; i++) {
		cin >> source[i].first >> source[i].second;
	}
	for (int i = 0; i < k; i++) {
		cin >> dest[i].first >> dest[i].second;
	}
	for (int i = 0; i < k; i++) {

	}

	return 0;
}