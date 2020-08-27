#include<iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	while (t--) {
		cin >> ws;
		getline(cin, s);
		for (int i = 0; i < s.size() / 2; i += 2) {
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}