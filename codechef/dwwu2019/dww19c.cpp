#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int n = a.size();
		int m = b.size();
		int arr[26] = {0};
		int brr[26] = {0};
		for (int i = 0; i < n; i++) {
			arr[a[i] - 'A']++;
		}
		for (int i = 0; i < m; i++) {
			brr[b[i] - 'A']++;
		}
		int count = 0;
		for (int i = 0; i < 26; i++) {
			count += max(0, brr[i] - arr[i]);
		}
		cout << count << endl;
	}

	return 0;
}