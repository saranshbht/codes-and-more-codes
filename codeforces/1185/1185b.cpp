#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s, t;
	cin >> n;
	while (n--) {
		cin >> s >> t;
		int a = s.size();
		int b = t.size();
		vector< pair<char, int> > sv;
		vector< pair<char, int> > tv;
		int count = 1;
		for (int i = 1; i < a; i++) {
			if (s[i] == s[i - 1]) {
				count++;
			} else {
				sv.push_back(make_pair(s[i - 1], count));
				count = 1;
			}
		}
		sv.push_back(make_pair(s[a - 1], count));
		count = 1;
		for (int i = 1; i < b; i++) {
			if (t[i] == t[i - 1]) {
				count++;
			} else {
				tv.push_back(make_pair(t[i - 1], count));
				count = 1;
			}
		}
		tv.push_back(make_pair(t[b - 1], count));


		// for(int i = 0; i < sv.size(); i++)
		//     cout << sv[i].first << " " << sv[i].second << endl;
		// cout << endl;
		// for(int i = 0; i < tv.size(); i++)
		//     cout << tv[i].first << " " << tv[i].second << endl;
		// cout << endl;
		if (sv.size() != tv.size()) {
			cout << "NO";
		} else {
			int i = 0;
			int k = sv.size();
			for (i = 0; i < k; i++)
				if (sv[i].first != tv[i].first || sv[i].second > tv[i].second) {
					break;
				}
			if (i < k) {
				cout << "NO";
			} else {
				cout << "YES";
			}
		}
		cout << endl;
	}

	return 0;
}