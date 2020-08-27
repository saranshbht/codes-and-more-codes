#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	map<int, vector<int> > mp;
	int n, p;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		cin >> p;
		mp[p].push_back(i);
	}
	bool flag = true;
	int count;
	for (auto &i : mp) {
		count = 0;
		for (auto &j : i.second) {
			if (mp.find(j) == mp.end()) {
				count++;
			}
			if (count == 3) {
				break;
			}
		}
		if (count < 3) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	cout << endl;
	return 0;
}