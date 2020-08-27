#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int arr[n];
		priority_queue <pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int ans[n];
		for (int i = 0; i < k; i++) {
			ans[i] = arr[i];
			pq.push(make_pair(ans[i], i));
		}
		for (int i = k; i < n; i++) {
			pair<int, int> x = pq.top();
			pq.pop();
			ans[i] = x.first ^ arr[i];
			ans[x.second] = -1;
			pq.push(make_pair(ans[i], i));
		}
		for (int i = 0; i < n; i++) {
			if (ans[i] == -1) {
				continue;
			}
			cout << ans[i] << " ";
		}
		cout << endl;
	}

	return 0;
}