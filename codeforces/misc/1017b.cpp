#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	string a, b;
	cin >> a >> b;
	ll count0 = 0, count1 = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == '0') {
			count0++;
		} else {
			count1++;
		}
	}
	ll clash1 = 0, clash0 = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] == '0') {
			if (a[i] == '0') {
				clash0++;
				sum += count1;
			} else {
				clash1++;
				sum += count0;
			}
		}
	}
	cout << sum - clash0 * clash1 << endl;

	return 0;
}