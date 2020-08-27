#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, a;
	priority_queue<int> q;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		cin >> a;
		if (a == -1) {
			cout << q.top() << endl;
			q.pop();
		} else {
			q.push(a);
		}
	}

	return 0;
}