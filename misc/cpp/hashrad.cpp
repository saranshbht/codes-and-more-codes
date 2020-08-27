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
		char arr[n + 1] = {0};
		strcpy(arr, s.c_str());
		int count = 0;
		for (int i = 0; i < n; i++) {
			count += arr[i] - 97;
		}
		if (count == 0 || count == n * 25 || n == 1) {
			cout << count << " " << -1;
		} else {
			int zs = count / 25;
			int extra = count % 25;
			int as = n - zs - 1;
			char newchar[n + 1] = {0};
			for (int i = 0; i < as; i++) {
				newchar[i] = 'a';
			}
			newchar[as] = (char)(extra + 97);
			for (int i = as + 1; i < n; i++) {
				newchar[i] = 'z';
			}
			int i;
			for (i = 0; i <= as; i++)
				if (arr[i] != newchar[i]) {
					break;
				}
			if (i == as + 1) {
				if (i == n) {
					newchar[i] = (char)(newchar[i] - 1);
				}
				newchar[i - 1] = (char)(newchar[i - 1] + 1);
			}
			cout << count << " " << newchar;
		}
		cout << endl;
	}

	return 0;
}