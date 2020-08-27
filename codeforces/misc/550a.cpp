#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;
	int i = s.find("AB");
	int i1 = s.find("BA");
	if (i == -1 || i1 == -1) {
		cout << "NO";
	} else {
		int j = s.find("BA", i + 2);
		int j1 = s.find("AB", i1 + 2);
		if (j == -1 && j1 == -1) {
			cout << "NO";
		} else {
			cout << "YES";
		}
	}
	cout << endl;
	return 0;
}