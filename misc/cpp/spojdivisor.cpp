#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	int n;
	int sum;
	cin >> t;
	while (t--) {
		sum = 1;
		cin >> n;
		if (n == 1) {
			cout << 0 << endl;
			continue;
		}

		for (int i = 2; i <= sqrt(n); i++) {
			if (!(n % i)) {
				if (i != (n / i))
					sum += i + (n / i);
				else
					sum += i;
			}
		}

		cout << sum << endl;
	}
	return 0;
}