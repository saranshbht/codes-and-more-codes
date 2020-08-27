#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, u, v;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[n + 1] {0};
		int minm = INT_MAX;
		for (int i = 0; i < m; i++) {
			cin >> u >> v;
			minm = min(minm, min(u, v));
			arr[u]++; arr[v]++;
		}
		long long count = 0;
		for (int i = 1; i <= n; i++)
			if (!arr[i])
				count += 1L * minm * i;
		cout << count << endl;
	}

	return 0;
}