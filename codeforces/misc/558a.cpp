#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int x, a;
	int neg = 0, pos = 0, sum = 0;
	vector<pair<int, int> > v;
	for (int i = 0; i < n; i++) {
		cin >> x >> a;
		if (x < 0) {
			neg++;
		} else {
			pos++;
		}
		sum += a;
		v.push_back(make_pair(x, a));
	}
	if (neg == pos || neg + 1 == pos || neg - 1 == pos) {
		cout << sum;
	} else {
		sort(v.begin(), v.end());
		int k;
		if (neg > pos) {
			k = neg - (pos + 1);
			for (int i = 0; i < k; i++) {
				sum -= v[i].second;
			}
		} else {
			k = pos - (neg + 1);
			int size = v.size();
			for (int i = size - 1; i >= size - k; i--) {
				sum -= v[i].second;
			}
		}
		cout << sum;
	}
	cout << endl;
	return 0;
}