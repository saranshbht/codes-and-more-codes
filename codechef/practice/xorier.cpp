#include<bits/stdc++.h>
using namespace std;

int main() {
	int t, oddSize, evenSize, result;
	cin >> t;
	int n, count, a;
	while (t--) {
		cin >> n;
		count = 0;
		vector<int> even, odd;
		map<int, int> count;
		for (int i = 0; i < n; i++) {
			cin >> a;
			if (a % 2)
				odd.push_back(a);
			else
				even.push_back(a);
			count[a]++;
		}
		oddSize = odd.size();
		evenSize = even.size();

		result = (oddSize * (oddSize - 1)) / 2 + (evenSize * (evenSize - 1)) / 2;
		for (int i = 0; i < oddSize - 1; i++)
			if (__builtin_popcount(odd[i] + 1) == 1)
				result -= count[odd[i] - 2];

		for (int i = 0; i < evenSize - 1; i++)
			if (__builtin_popcount(even[i]) == 1)
				result -= count[even[i] + 2];

		cout << result << endl;
	}
	return 0;
}

