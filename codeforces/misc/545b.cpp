#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string a, b;
	int n;
	cin >> a >> b;
	n = a.size();
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (a[i] != b[i]) {
			cnt++;
		}
	if (cnt & 1) {
		cout << "impossible";
	} else {
		cnt /= 2;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				if (cnt) {
					cout << a[i];
					cnt--;
				} else {
					cout << b[i];
				}
			} else {
				cout << a[i];
			}
		}
	}
	cout << endl;
	return 0;
}