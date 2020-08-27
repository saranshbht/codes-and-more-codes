#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> v;
	while (n > 0 && n % 7) {
		v.push_back(4);
		n -= 4;
	}
	if (n % 7 == 0) {
		int k = n / 7;
		for (int i = 0; i < k; i++) {
			v.push_back(7);
		}
		int size = v.size();
		for (int i = 0; i < size; i++) {
			cout << v[i];
		}
	} else {
		cout << -1;
	}
	cout << endl;
	return 0;
}