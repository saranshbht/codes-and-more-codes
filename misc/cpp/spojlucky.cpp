#include<bits/stdc++.h>
using namespace std;

int lucky(int n) {
	int prime[3000] = {0};
	vector<int> ans;
	for (int i = 2; i < 3000; i++) {
		if (prime[i] == 0) {
			prime[i] = 1;
			for (int j = i * 2; j < 3000; j += i) {
				prime[j] -= 1;
				if (prime[j] + 3 == 0)
					ans.push_back(j);
			}
		}
	}
	sort(ans.begin(), ans.end());
	return ans[n - 1];
}

int main() {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << lucky(n) << endl;
	}
	return 0;
}