#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int getDiff(int n) {
	if (n <= 3)
		return n - 1;
	int k = 1;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			k = i;
	return abs(k - n / k);
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << getDiff(n) << endl;
	}

	return 0;
}