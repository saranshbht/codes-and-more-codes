#include<bits/stdc++.h>
using namespace std;

string incr(int left, int mid, int right, string str) {
	int n = str.length();
	if (mid || right) {
		if (str.at(n / 2) == '9') {
			int i = n / 2;
			while (i >= 0 && str.at(i) == '9') {
				str.replace(i, 1, 1, '0');
				i--;
			}
			if (i == -1)
				str.insert(0, 1, '1');
			else
				str.replace(i, 1, 1, str.at(i) + 1);
		}
		else
			str.replace(n / 2, 1, 1, str.at(n / 2) + 1);

		if (!(n % 2))
			str.replace(n / 2 - 1, 1, 1, str.at(n / 2 - 1) + 1);
	}

	n = str.length();
	string s(str.substr(0, n / 2));
	reverse(s.begin(), s.end());

	if (n % 2)
		str.replace(n / 2 + 1, n / 2, s);
	else
		str.replace(n / 2, n / 2, s);

	return str;
}

string nextP(string s) {
	for (int i = 0; i < s.length(); i++) {
		if (!(s.at(i) >= '0' && s.at(i) <= '9')) {
			s.replace(i, 1, "");
			i--;
		}
	}

	if (s.length() == 1)
		return "11";
	int i;
	for (i = s.length() / 2 - 1; i >= 0; i--) {
		if (s.at(i) != s.at(s.length() - 1 - i))
			break;
	}

	if (i != -1) {
		if (s.at(i) > s.at(s.length() - 1 - i))
			return incr(1, 0, 0, s);
		else
			return incr(0, 0, 1, s);
	}
	else
		return incr(0, 1, 0, s);
}

int main() {
	string s;
	int t;
	cin >> t;
	while (t--) {
		cin >> ws;
		getline(cin, s);
		cout << nextP(s) << endl;
	}
	return 0;
}