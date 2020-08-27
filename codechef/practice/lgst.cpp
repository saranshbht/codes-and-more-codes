#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, q;
	long long s;
	cin >> n >> q;
	long long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (int i = 0; i < q; i++) {
		cin >> s;
		auto ptr = lower_bound(arr, arr + n, s);
		if (ptr == arr)
		}

	return 0;
}