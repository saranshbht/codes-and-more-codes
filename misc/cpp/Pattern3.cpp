#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int l, c;
	while (t--) {
		cin >> l >> c;
		for (int i = 0; i < 3 * l + 1; i++) {
			for (int j = 0; j < 3 * c + 1; j++) {
				if (i % 3 == 0 || j % 3 == 0) {
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