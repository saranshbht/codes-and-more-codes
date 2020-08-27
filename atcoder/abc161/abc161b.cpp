#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int a[n];
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int count = 0;
	double minm = sum / (double)(4 * m);
	for (int i = 0; i < n; i++)
		if (a[i] >= minm) {
			count++;
		}
	if (count >= m) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	cout << endl;

	return 0;
}