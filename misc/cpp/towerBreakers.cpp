#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MAX 1000000
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> h(n);
		for (int i = 0; i < n; i++) {
			cin >> h[i];
		}
		vector<int> cnt(n, 1);
		for (int i = 0; i < n; i++) {
			int j;
			if (h[i] == 1)
				cnt[i]--;
			for (j = 2; j * j < h[i]; j++) {
				if (h[i] % j == 0)
					cnt[i] += 2;
			}
			if (j * j == h[i])
				cnt[i]++;
		}
		// for (int i = 0; i < n; i++) {
		//  cout << h[i] << " " << cnt[i] << endl;
		// }
		int Xor = 0;
		for (int i = 0; i < n; i++)
			Xor ^= cnt[i];
		if (Xor)
			cout << 1;
		else
			cout << 2;
		cout << Xor << endl;
		cout << endl;
	}

	return 0;
}