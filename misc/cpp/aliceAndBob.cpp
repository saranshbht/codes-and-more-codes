#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MAX 100000
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	vector<bool> prime(MAX + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i <= MAX; i++) {
		if (prime[i]) {
			for (int j = i * i; j <= MAX; j += i) {
				prime[j] = false;
			}
		}
	}
	vector<int> arr(MAX + 1, 0);
	for (int i = 2; i <= MAX; i++) {
		arr[i] = arr[i - 1];
		if (prime[i]) {
			arr[i]++;
		}
	}

	int g, n;
	cin >> g;
	while (g--) {
		cin >> n;
		if (arr[n] & 1) {
			cout << "Alice";
		} else {
			cout << "Bob";
		}
		cout << endl;
	}

	return 0;
}