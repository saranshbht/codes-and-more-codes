#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	cin >> n;
	set<int> s;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
		mp[a]++;
	}
	int maxm = -1;
	for (auto &i : s) {
		maxm = max(maxm, mp[i]);
	}
	cout << maxm << endl;
	return 0;
}