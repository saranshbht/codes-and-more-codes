#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	char s[80];
	cin >> n;
	cin.getline(s, 80);
	vector<vector<string> > v(n);
	for (int i = 0; i < n; i++) {
		cin.getline(s, 80);
		char *ptr;
		ptr = strtok(s, " ',.;:");
		while (ptr != NULL) {
			v[i].push_back(ptr);
			ptr = strtok(NULL, " ',.;:");
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		int m = v[i].size();
		for (int j = m - 1; j >= 0; j--) {
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}