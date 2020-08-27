#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	map<int, vector<int> > mp;
	map<pair<int, int>, int> v;
	int a, b;
	for (int i = 1; i < n; i++) {
		cin >> a >> b;
		mp[a].push_back(b);
		mp[b].push_back(a);
		v[make_pair(a, b)] = i;
	}
	int maxm, maxSize = 0;
	for (auto &i : mp) {
		if (i.second.size() > maxSize) {
			maxSize = i.second.size();
			maxm = i.first;
		}
	}
	int val = 0;
	vector<int> res(n, -1);
	res[0] = -2;
	for (auto &i : mp[maxm]) {
		if (v.find(make_pair(maxm, i)) != v.end()) {
			res[v[make_pair(maxm, i)]] = val++;
		} else {
			res[v[make_pair(i, maxm)]] = val++;
		}
	}

	for (auto &i : res) {
		if (i == -2) {
			continue;
		}
		if (i == -1) {
			cout << val++;
		} else {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}