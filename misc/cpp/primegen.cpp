#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int a) {

	if (a == 1) {
		return false;
	}
	if (a == 2 || a == 3) {
		return true;
	}
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	int a, b;
	while (t--) {
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			if (isPrime(i)) {
				cout << i << "\n";
			}
		}
	}
	return 0;
}