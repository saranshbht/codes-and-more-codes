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
		int arr[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (arr[0] != 1 || n < 13) {
			cout << "no" << endl;
			continue;
		}
		int num = 1;
		int cnt[7] = {0};
		int i, count = 1;
		for (i = 1; i < n; i++) {
			if (arr[i] != num) {
				if (arr[i] != num + 1)
					break;
				cnt[num - 1] = count;
				count = 0;
				num++;
			}
			count++;
		}
		if (arr[i - 1] != 7 || arr[i] != 6) {
			cout << "no" << endl;
			continue;
		}

		num = 6;
		count = 1;
		i++;
		for (; i < n; i++) {
			if (arr[i] != num) {
				if (arr[i] != num - 1)
					break;
				cnt[num - 1] -= count;
				count = 0;
				num--;
			}
			count++;
		}
		if (i != n) {
			cout << "no" << endl;
			continue;
		}
		cnt[num - 1] -= count;
		for (i = 0; i < 6; i++) {
			if (cnt[i])
				break;
		}
		if (i != 6) {
			cout << "no" << endl;
			continue;
		}
		cout << "yes" << endl;
	}

	return 0;
}