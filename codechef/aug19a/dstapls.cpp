#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	long long n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		//cout << n;
		if ((n / k) % k) {
			cout << "YES";
		} else {
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}