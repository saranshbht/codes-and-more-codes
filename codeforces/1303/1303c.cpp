#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	string s;
	while (t--) {
		map<char, unordered_set<char> > mp;
		unordered_set<char> res;
		for (int i = 0 ; i < 26; i++) {
			res.insert('a' + i);
		}
		cin >> s;
		int n = s.size();
		if (n == 1) {
			cout << "YES" << endl;
			for (auto &i : res) {
				cout << i;
			}
			cout << endl;
			continue;
		}
		deque<char> d;
		d.push_back(s[0]);
		d.push_back(s[1]);
		res.erase(s[0]);
		res.erase(s[1]);
		int index = 1;
		bool flag = true;
		for (int i = 2; i < n; i++) {
			if (index > 0 && index < d.size() - 1) {
				if (s[i] == d[index - 1]) {
					index--;
				} else if (s[i] == d[index + 1]) {
					index++;
				} else {
					flag = false;
					break;
				}
			} else if (index > 0) {
				if (s[i] == d[index - 1]) {
					index--;
				} else {
					if (res.find(s[i]) == res.end()) {
						flag = false;
						break;
					}
					d.push_back(s[i]);
					res.erase(s[i]);
					index++;
				}
			} else if (index < d.size() - 1) {
				// cout << s[i] << endl;
				if (s[i] == d[index + 1]) {
					index++;
				} else {
					if (res.find(s[i]) == res.end()) {
						flag = false;
						break;
					}
					d.push_front(s[i]);
					res.erase(s[i]);
					// index--;
				}
			}
		}
		if (flag) {
			cout << "YES" << endl;
			for (auto &i : d) {
				// res.erase(i);
				cout << i;
			}
			for (auto &i : res) {
				cout << i;
			}
		} else {
			cout << "NO";
		}
		cout << endl;
	}

	return 0;
}