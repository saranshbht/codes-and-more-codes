#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		double loss = 0.0;
		cin >> n;
		while (n--) {
			double p, q, x;
			cin >> p >> q >> x;
			double price;
			price = p + (x / 100) * p;
			price -= (x / 100) * price;
			loss += (p - price) * q;
		}

		cout << loss << "\n";
	}
	return 0;
}
