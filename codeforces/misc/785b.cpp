#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n;
	int arrFirst[n], arrSecond[n];
	for (int i = 0; i < n; i++) {
		cin >> arrFirst[i] >> arrSecond[i];
	}
	cin >> m;
	int brrFirst[m], brrSecond[m];
	for (int i = 0; i < m; i++) {
		cin >> brrFirst[i] >> brrSecond[i];
	}
	sort(arrFirst, arrFirst + n);
	sort(arrSecond, arrSecond + n);
	sort(brrFirst, brrFirst + m);
	sort(brrSecond, brrSecond + m);
	cout << max(max(0, brrFirst[m - 1] - arrSecond[0]), max(0, arrFirst[n - 1] - brrSecond[0])) << endl;
	return 0;
}