#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define M (long long)(998244353)

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	set<int> s;
	for (int i = n; i > n - k; i--) {
		s.insert(i);
	}
	long long l = n - k;
	long long sum = (1ll * n * (n + 1) / 2) - (1ll * l * (l + 1) / 2);
	long long ans = 1;
	int cnt = 0;
	int left, right;
	for (left = 0; left < n; left++)
		if (s.find(arr[left]) != s.end()) {
			break;
		}
	for (right = n - 1; right >= 0; right--)
		if (s.find(arr[right]) != s.end()) {
			break;
		}
	int count = 0;
	for (int i = left + 1; i <= right; i++) {
		if (s.find(arr[i]) == s.end()) {
			count++;
		} else {
			if (count == 0) {
				continue;
			}
			ans = (ans * (count + 1)) % M;
			count = 0;
		}
	}
	cout << sum << " " << ans << endl;

	return 0;
}