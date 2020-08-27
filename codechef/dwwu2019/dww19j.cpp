#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

bool isPrime(int n) {
	for (long long i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		if (isPrime(n)) {
			cout << "Divesh";
		} else {
			cout << "Tanya";
		}
		cout << endl;
	}

	return 0;
}