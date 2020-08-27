#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int diff = INT_MAX;
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				if ((j - i) % m != 0) {
					diff = min(abs(arr[j] - arr[i]), diff);
				}
			}
		}
		cout << diff << endl;
	}

	return 0;
}