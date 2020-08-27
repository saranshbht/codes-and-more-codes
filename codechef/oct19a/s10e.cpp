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
		int arr[n + 5];
		arr[0] = arr[1] = arr[2] = arr[3] = arr[4] = INT_MAX;
		for (int i = 5; i < n + 5; i++)
			cin >> arr[i];
		int count = 1;
		for (int i = 6; i < n + 5; i++) {
			if ((arr[i] < arr[i - 1]) && (arr[i] < arr[i - 2]) && (arr[i] < arr[i - 3]) && (arr[i] < arr[i - 4]) && (arr[i] < arr[i - 5]))
				count++;
		}
		cout << count << endl;
	}

	return 0;
}