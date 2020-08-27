#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, x, s, a, b, box;
	while (t--) {
		cin >> n >> x >> s;
		while (s--) {
			cin >> a >> b;
			if (a == x) {
				x = b;
			} else {
				x = a;
			}
		}
		cout << x << endl;
	}
	return 0;
}
