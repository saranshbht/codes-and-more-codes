#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		string bin = bitset<32>(n).to_string();
		int k = bin.size();
		int sum = 0;
		for (int i = 0; i < k; i++) {
			if (bin[i] == '1') {
				sum += k - 1 - i;
			}
		}
		cout << sum << endl;
	}

	return 0;
}