#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (b >= a) {
			cout << "Himawari\n";
		} else {
			cout << "Shinchan\n";
		}
	}
	return 0;
}