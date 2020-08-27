#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	long long sum = 0;
	int prev, cur;
	cin >> prev;
	for (int i = 1; i < n; i++) {
		cin >> cur;
		if (cur < prev) {
			sum += prev - cur;
		} else {
			prev = cur;
		}
	}
	cout << sum << endl;
	return 0;
}