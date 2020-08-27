#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a, b, c, d;
	cin >> n >> a >> b >> c >> d;
	int i = abs(c - b);
	int j = abs(d - a);
	int k = abs((c + d) - (a + b));
	int maxm = max(i, max(j, k));
	cout << 1ll * (n - maxm) * n << endl;
	return 0;
}