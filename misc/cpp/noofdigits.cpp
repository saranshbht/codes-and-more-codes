#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	while (n > 0) {
		n /= 10;
		count++;
		if (count > 3) {
			break;
		}
	}

	if (count > 3) {
		cout << "More than 3 digits";
	} else {
		cout << count;
	}
	cout << "\n";

	return 0;
}