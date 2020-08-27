#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool comp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) {
		return a.second < b.second;
	} else {
		return a.first > b.first;
	}

}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k, p, t;
	cin >> n >> k;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		cin >> p >> t;
		v.push_back(make_pair(p, t));
	}
	sort(v.begin(), v.end(), comp);
	// for(int i = 0; i < n; i++){
	//     cout << i + 1 << " " << v[i].first << " " << v[i].second << endl;
	// }
	p = v[k - 1].first;
	t = v[k - 1].second;
	int count = 1;
	int i = k;
	while (i < n && v[i].first == p && v[i].second == t) {
		i++;
		count++;
	}
	i = k - 2;
	while (i >= 0 && v[i].first == p && v[i].second == t) {
		i--;
		count++;
	}
	cout << count << endl;
	return 0;
}