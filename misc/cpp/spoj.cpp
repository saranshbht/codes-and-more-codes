#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	string s;
	string str;
	while (t--) {
		cin >> ws;
		getline(cin, s);
		str = "";
		stack<char> ms;
		for (int i = 0; i < s.size(); i++) {
			if (s.at(i) >= 'a' && s.at(i) <= 'z') {
				string ch(1, s.at(i));
				str.append(ch);
			}
			else if (s.at(i) == '*' || s.at(i) == '*' || s.at(i) == '/' || s.at(i) == '+' || s.at(i) == '-' || s.at(i) == '^')
				ms.push(s.at(i));
			else if (s.at(i) == ')') {
				string ch(1, ms.top());
				str.append(ch);
				ms.pop();
			}
		}
		cout << str << endl;
	}
	return 0;
}