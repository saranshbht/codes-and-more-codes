#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long n;
	cin >> n;
	int a;
	long long sum = 0;
	for (int i = 1; i < n; i++) {
		cin >> a;
		sum += a;
	}
	cout << n * (n + 1) / 2 - sum << endl;

	return 0;
}