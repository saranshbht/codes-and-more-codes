#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	string s;
	cin >> s;
	int count = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == '8') {
			count++;
			v.push_back(i);
		}
	}
	if ((n - 11) / 2 >= count) {
		cout << "NO";
	} else {
		if (v[(n - 11) / 2] <= n - 11) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	cout << endl;
	return 0;
}