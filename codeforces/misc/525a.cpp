#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	string str;
	cin >> n >> str;
	n = 2 * n - 2;
	map<char, int> s;
	int count = 0;
	for (int i = 0; i < n; i += 2) {
		if (str[i] != str[i + 1] + 32) {
			s[str[i]]++;;
			if (s[(char)(str[i + 1] + 32)] == 0) {
				count++;
			} else {
				s[(char)(str[i + 1] + 32)]--;
			}
		}
	}
	cout << count << endl;
	return 0;
}