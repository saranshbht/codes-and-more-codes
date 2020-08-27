#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int i = n % 10;
		if (i == 0)
			cout << 0;
		else if (i == 5)
			cout << 1;
		else
			cout << -1;
		cout << "\n";
	}
	return 0;
}