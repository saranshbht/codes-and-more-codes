#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int minVal = 1, maxVal = n;
	while (minVal < n && arr[minVal - 1] == minVal) {
		minVal++;
	}
	while (maxVal > 0 && arr[maxVal - 1] == maxVal) {
		maxVal--;
	}

	vector<pair<int, int> > v;
	for (int i = minVal - 1; i < maxVal;) {
		int j = i;
		// cout << i << endl;
		while ((j < maxVal) && (arr[j + 1] == arr[j] + 1)) {
			j++;
		}
		if (j == maxVal) {
			v.push_back(make_pair(arr[i], arr[j]));
			break;
		}
		v.push_back(make_pair(arr[i], arr[j]));
		i = j + 1;
	}

	if (minVal != 1) {
		k--;
	}
	if (maxVal != n) {
		k--;
	}
	if (v.size() <= k) {
		for (int i = 0; i < n; i++) {
			cout << i + 1 << " ";
		}
		cout << endl;
	} else {
		int l = (k - 1) / 2;
		sort(v.begin(), v.end());
		int newMinVal = v[l - 1].second;
		int newMaxVal = v[v.size() - l].first;
		// for(int i = 0; i < v.size(); i++){
		//     cout << v[i].first << " " << v[i].second << endl;
		// }
		if (newMinVal - minVal >= maxVal - newMaxVal) {
			for (int i = 1; i <= newMinVal; i++) {
				cout << i << " ";
			}
			for (int i = 0; i < n; i++)
				if (arr[i] > newMinVal && arr[i] <= maxVal) {
					cout << arr[i] << " ";
				}
			for (int i = maxVal + 1; i <= n; i++) {
				cout << i << " ";
			}
			cout << endl;
		} else {
			for (int i = 1; i < minVal; i++) {
				cout << i << " ";
			}
			for (int i = 0; i < n; i++)
				if (arr[i] >= minVal && arr[i] < newMaxVal) {
					cout << arr[i] << " ";
				}
			for (int i = newMaxVal; i <= n; i++) {
				cout << i << " ";
			}
			cout << endl;
		}
	}
	return 0;
}