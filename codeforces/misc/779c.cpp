#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	int arr[n], brr[n];
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> brr[i];
	}
	for (int i = 0; i < n; i++) {
		v.push_back(make_pair(arr[i] - brr[i], i));
	}
	sort(v.begin(), v.end());
	int sum = 0;
	int size = v.size();
	for (int i = 0; i < size; i++) {
		if (v[i].first < 0 || k > 0) {
			sum += arr[v[i].second];
			brr[v[i].second] = 0;
			k--;
		}
	}
	for (int i = 0; i < n; i++) {
		sum += brr[i];
	}
	cout << sum << endl;

	return 0;
}