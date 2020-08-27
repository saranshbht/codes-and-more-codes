#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int l, c;
	while (t--) {
		cin >> l >> c;
		for (int i = 0; i < l; i++) {
			for (int j = 0; j < c; j++) {
				if ((i + j) % 2 == 0) {
					cout << "*";
				} else {
					cout << ".";
				}
			}
			cout << endl;
		}
	}
	return 0;
}