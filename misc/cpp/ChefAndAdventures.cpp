#include<iostream>
using namespace std;

int main() {
	int t;
	int n, m, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m >> x >> y;
		if ((n - 1) % x == 0 && (m - 1) % y == 0) {
			cout << "Chefirnemo";
		} else if ((n - 2) % x == 0 && (m - 2) % y == 0) {
			cout << "Chefirnemo";
		} else {
			cout << "Pofik";
		}
		cout << endl;
	}
	return 0;
}