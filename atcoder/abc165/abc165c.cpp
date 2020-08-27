#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, q, a, b, c, d;
	cin >> n >> m >> q;
	// vector<int> arr(n + 1);
	// for(int i = 1; i <= n; i++)
	//     cin >> arr[i];
	long long sum = 0;
	for (int i = 0; i < q; i++) {
		cin >> a >> b >> c >> d;
		if (arr[b] - arr[a] == c) {
			sum += d;
		}
	}
	cout << sum << endl;

	return 0;
}