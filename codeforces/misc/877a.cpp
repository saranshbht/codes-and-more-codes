#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;
	string a = "Danil";
	string b = "Olya";
	string c = "Slava";
	string d = "Ann";
	string e = "Nikita";
	cin >> str;
	int cnt = 0;
	int pos = str.find(a);
	while (pos != -1) {
		pos = str.find(a, pos + a.size());
		cnt++;
	}
	pos = str.find(b);
	while (pos != -1) {
		pos = str.find(b, pos + b.size());
		cnt++;
	}
	pos = str.find(c);
	while (pos != -1) {
		pos = str.find(c, pos + c.size());
		cnt++;
	}
	pos = str.find(d);
	while (pos != -1) {
		pos = str.find(d, pos + d.size());
		cnt++;
	}
	pos = str.find(e);
	while (pos != -1) {
		pos = str.find(e, pos + e.size());
		cnt++;
	}
	if (cnt == 1) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}