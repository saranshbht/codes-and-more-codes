#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k, l;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		string arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		unordered_set<string> st;
		for (int i = 0; i < k; i++) {
			cin >> l;
			for (int j = 0; j < l; j++) {
				cin >> s;
				st.insert(s);
			}
		}
		for (int i = 0; i < n; i++) {
			if (st.find(arr[i]) != st.end()) {
				cout << "YES ";
			} else {
				cout << "NO ";
			}
		}
		cout << endl;
	}
	return 0;
}