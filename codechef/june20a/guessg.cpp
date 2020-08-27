#include<bits/stdc++.h>
using namespace std;

int main() {
	// ios_base :: sync_with_stdio(false);
	// cin.tie(0);
	// cout.tie(0);

	int n;
	cin >> n;
	vector<char> odd(32, 'A'), even(32, 'A');
	int i = 0;
	while ((1 << i) < n) {
		cout << (1 << i) << endl;
		cin >> odd[i];
		if (odd[i] == 'E') {
			return 0;
		}
		cout << (1 << i) << endl;
		cin >> even[i];
		i++;
	}

	int idx = -1;
	char oRes, eRes;
	int start, end;
	while (odd[++idx] == 'G');
	if (!idx) {
		start = 1, end = 0;
	} else {
		start = (1 << (idx - 1));
		end = min(start << 1, n);
	}

	while (start <= end) {
		int mid = start + ((end - start) >> 1);
		cout << mid << endl;
		cin >> oRes;
		if (oRes == 'E') {
			return 0;
		}
		cout << mid << endl;
		cin >> eRes;

		if (oRes == 'G') {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	idx = -1;
	while (even[++idx] == 'G');
	if (!idx) {
		start = 1, end = 0;
	} else {
		start = (1 << (idx - 1));
		end = min(start << 1, n);
	}
	while (start <= end) {
		int mid = start + ((end - start) >> 1);
		cout << mid << endl;
		cin >> oRes;
		if (oRes == 'E') {
			return 0;
		}
		cout << mid << endl;
		cin >> eRes;

		if (eRes == 'G') {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}

	return 0;
}