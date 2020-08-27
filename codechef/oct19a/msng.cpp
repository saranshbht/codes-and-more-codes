#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(1e12)
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, b;
	ll a;
	string y;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<pair<int, string> > v;
		for (int i = 0; i < n; i++) {
			cin >> b >> y;
			v.push_back(make_pair(b, y));
		}
		sort(v.begin(), v.end());
		reverse(v.begin(), v.end());
		if (v[0].first != -1) {
			// if(count(v[0].second.begin(), v[0].second.end(), '0') == v[0].second.size()){
			//     int i;
			//     for(i = 1; i < n; i++){
			//         int j;
			//         for(j = 0; j < v[i].second.size(); j++){
			//             if(v[i].second[j] != '0')
			//                 break;
			//         }
			//         if(j != v[i].second.size())
			//             break;
			//     }
			//     if(i != n)
			//         cout << -1;
			//     else
			//         cout << 0;
			//     cout << endl;
			//     continue;

			// }
			a = strtoll(v[0].second.c_str(), nullptr, v[0].first);
			if (a > M) {
				//cout << 0 << endl;
				cout << -1 << endl;
				continue;
			}
			int i = 1;
			while (i < n && v[i].first != -1) {
				if (strtoll(v[i].second.c_str(), nullptr, v[i].first) != a) {
					break;
				}
				i++;
			}
			if (i < n && v[i].first != -1) {
				cout << -1 << endl;
				continue;
			}
			if (i == n) {
				cout << a << endl;
				continue;
			}
			while (i < n) {
				bool flag = true;
				int j;
				char c = *max_element(v[i].second.begin(), v[i].second.end());
				if (c <= '9') {
					j = c - '0' + 1;
				} else {
					j = c - 54;
				}
				for (; j <= 36; j++) {
					//cout << "hello";
					ll b = strtoll(v[i].second.c_str(), nullptr, j);
					if (b == a) {
						break;
					} else if (b > a) {
						flag = false;
						break;
					}
				}
				if (!flag || j == 37) {
					break;
				}
				i++;
			}
			if (i != n) {
				cout << -1;
			} else {
				cout << a;
			}
			cout << endl;
		} else {
			int i = 0;
			map<ll, int> mp;
			while (i < n) {
				int j;
				set<ll> s;
				char c = *max_element(v[i].second.begin(), v[i].second.end());
				if (c <= '9') {
					j = c - '0' + 1;
				} else {
					j = c - 54;
				}
				//cout << j << endl;
				for (; j <= 36; j++) {
					ll b = strtoll(v[i].second.c_str(), nullptr, j);
					//cout << b << endl;
					if (b > M) {
						break;
					}
					s.insert(b);
				}
				for (auto it = s.begin(); it != s.end(); it++) {
					mp[*it]++;
				}
				i++;
			}
			auto it = mp.begin();
			for (; it != mp.end(); it++) {
				//cout << it-> first <<  " " << it-> second << endl;
				if (it->second == n) {
					break;
				}
			}
			if (it != mp.end()) {
				//cout << 1 << endl;
				cout << it->first << endl;
			} else {
				//cout << 2 << endl;
				cout << -1 << endl;
			}
		}
	}

	return 0;
}