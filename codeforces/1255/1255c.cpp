#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

struct triple {
	int a, b, c;
};

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<triple> v(n - 2);
	map<int, vector<int> > mp;
	for (int i = 0; i < n - 2; i++) {
		cin >> v[i].a >> v[i].b >> v[i].c;
		mp[v[i].a].push_back(i);
		mp[v[i].b].push_back(i);
		mp[v[i].c].push_back(i);
	}
	vector<int> one, two;
	for (auto &i : mp) {
		if (i.second.size() == 1) {
			one.push_back(i.first);
		} else if (i.second.size() == 2) {
			two.push_back(i.first);
		}
	}
	vector<int> res;
	res.push_back(one[0]);
	if (v[mp[one[0]][0]].a == two[0] || v[mp[one[0]][0]].b == two[0] || v[mp[one[0]][0]].c == two[0]) {
		res.push_back(two[0]);
	} else {
		res.push_back(two[1]);
	}
	if (v[mp[one[0]][0]].a != res[0] && v[mp[one[0]][0]].a != res[1]) {
		res.push_back(v[mp[one[0]][0]].a);
	} else if (v[mp[one[0]][0]].b != res[0] && v[mp[one[0]][0]].b != res[1]) {
		res.push_back(v[mp[one[0]][0]].b);
	} else {
		res.push_back(v[mp[one[0]][0]].c);
	}
	for (int i = 3; i < n; i++) {
		int a = res[i - 1];
		int b = res[i - 2];
		int c = res[i - 3];
		for (auto &i : mp[a]) {
			int count = 0;
			if (v[i].a == a || v[i].b == a || v[i].c == a) {
				count++;
			}
			if (v[i].a == b || v[i].b == b || v[i].c == b) {
				count++;
			}
			if (v[i].a == c || v[i].b == c || v[i].c == c) {
				count -= 3;
			}
			if (count == 2) {
				if (v[i].a != a && v[i].a != b) {
					res.push_back(v[i].a);
				} else if (v[i].b != a && v[i].b != b) {
					res.push_back(v[i].b);
				} else {
					res.push_back(v[i].c);
				}
				break;
			}
		}
	}
	for (auto &i : res) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}