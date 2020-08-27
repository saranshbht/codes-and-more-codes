#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, x, y;
	while (t--) {
		cin >> n >> x >> y;
		int i = x;
		while (true) {
			if (i % y != 0) {
				cout << i << " ";
			}
			i += x;
			if (i >= n) {
				break;
			}
		}
		cout << endl;
	}
	return 0;
}