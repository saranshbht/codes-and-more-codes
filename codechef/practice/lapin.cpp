#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		int n = s.size();
		vector<int> arr(26, 0);
		for (int i = 0; i < (n >> 1); i++) {
			arr[s[i] - 97]++;
		}
		for (int i = ((n + 1) >> 1); i < n; i++) {
			arr[s[i] - 97]--;
		}
		int i;
		for (i = 0; i < 26; i++)
			if (arr[i]) {
				break;
			}
		cout << ((i == 26) ? "YES" : "NO") << endl;
	}

	return 0;
}