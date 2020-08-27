#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int m, n;
	cin >> n >> m;
	vector<int> height(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> height[i];
	}
	vector<vector<int> > graph(n + 1);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		int k = graph[i].size();
		int j = 0;
		for (; j < k; j++) {
			if (height[i] <= height[graph[i][j]]) {
				break;
			}
		}
		if (j == k) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}