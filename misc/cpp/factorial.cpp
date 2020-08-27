#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n, num;
	while (t--) {
		cin >> n;
		num = 0;
		for (int i = 5; i <= n; i *= 5) {
			num += n / i;
		}
		cout << num << endl;
	}
	return 0;
}