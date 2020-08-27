#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	long long a, b, n;
	cin >> a >> b >> n;
	cout << a * min(n, b - 1) / b << endl;

	return 0;
}