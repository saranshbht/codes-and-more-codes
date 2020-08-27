#include<bits/stdc++.h>
using namespace std;

int main() {
	string n;
	cin >> n;
	int s = n.size();
	int num;
	if (s > 1) {
		num = (n[s - 2] - '0') * 10 + (n[s - 1] - '0');
	} else {
		num = n[0] - '0';
	}
	//cout << num << endl;
	if (num % 4) {
		cout << 0;
	} else {
		cout << 4;
	}
	cout << endl;
	return 0;
}