#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, k;
	cin >> t;
	while (t--) {
		cin >> k;
		vector<vector<char> > arr(8, vector<char>(8, 'X'));
		int count = 1;
		arr[0][0] = 'O';
		while (count < k) {
			arr[count / 8][count % 8] = '.';
			count++;
		}
		for (auto &i : arr) {
			for (auto &j : i) {
				cout << j;
			}
			cout << endl;
		}
	}

	return 0;
}