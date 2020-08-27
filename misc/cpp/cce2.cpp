#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int start = 1, end = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[i + 1]) {
			start = i;
			break;
		}
	}
	for (int i = n; i > 1; i--) {
		if (a[i] < a[i - 1]) {
			end = i;
			break;
		}
	}
	reverse(a.begin() + start, a.begin() + end + 1);
	int i;
	for (i = 1; i < n; i++) {
		if (a[i] > a[i + 1]) {
			break;
		}
	}
	if (i != n) {
		cout << "no";
	} else {
		cout << "yes" << endl << start << " " << end << endl;
	}
	return 0;
}