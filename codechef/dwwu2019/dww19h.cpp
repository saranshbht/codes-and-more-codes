#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	string s;
	while (t--) {
		cin >> n >> s;
		if (s.size() == 1) {
			if (s == "S") {
				cout << n - 1;
			} else {
				cout << 0;
			}
			cout << endl;
			continue;
		}
		long long count = 0;
		int size = s.size() - 1;
		for (int i = 0; i < size; i++)
			if (s[i] == 'S' && s[i + 1] == 'S') {
				count++;
			}
		count *= n;
		if (s[0] == 'S' && s[s.size() - 1] == 'S') {
			count += n - 1;
		}
		cout << count << endl;
	}

	return 0;
}