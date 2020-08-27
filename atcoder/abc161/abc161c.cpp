#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n, k;
	cin >> n >> k;
	long long m = n % k;
	if (m > k / 2) {
		m = k - m;
	}
	cout << m << endl;

	return 0;
}