#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	ll n1, n2, m;
	cin >> t;
	while (t--) {
		cin >> n1 >> n2 >> m;
		ll sum = m * (m + 1) / 2;
		if (sum <= n1 && sum <= n2) {
			cout << n1 - sum + n2 - sum;
		} else {
			cout << abs(n1 - n2);
		}
		cout << endl;
	}

	return 0;
}