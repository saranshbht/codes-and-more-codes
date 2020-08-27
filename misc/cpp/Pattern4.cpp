#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int l, c, h, w;
	while (t--) {
		cin >> l >> c >> h >> w;
		for (int i = 0; i < l * (h + 1) + 1; i++) {
			for (int j = 0; j < c * (w + 1) + 1; j++) {
				if (i % (h + 1) == 0 || j % (w + 1) == 0) {
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