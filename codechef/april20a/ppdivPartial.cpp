// #include <iostream>
// #include <vector>
// #include <math.h>
#include<bits/stdc++.h>
#define mod  1000000007
using namespace std;

using namespace std:: chrono;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		auto start = high_resolution_clock::now();
		int x = sqrt(n);
		vector<bool> v(x + 5, false);
		long long int ans = n % mod;
		for (long long int i = 2; i <= x; i++) {
			if (!v[i]) {
				v[i] = true;
				long long int prevtemp = i;
				for (long long int temp = i * i; temp <= n; temp *= i) {
					if (temp <= prevtemp) {
						break;
					}
					if (temp <= x) {
						v[temp] = true;
					}
					ans = (ans + ((n / temp) * temp) % mod) % mod;
					prevtemp = temp;
				}
			}
		}
		cout << ans << '\n';
		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		cout << duration.count() << endl;
	}
}