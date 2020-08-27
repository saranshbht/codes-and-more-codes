#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		if (sum + arr[i] <= m) {
			cout << 0 << " ";
		} else {
			sort(v.begin(), v.end(), greater<int>());
			int count = 0;
			int newsum = 0;
			for (int j = 0; j < i; j++) {
				newsum += v[j];
				count++;
				if ((sum + arr[i]) - newsum <= m) {
					break;
				}
			}
			cout << count << " ";
		}
		sum += arr[i];
		v.push_back(arr[i]);
	}
	cout << endl;
	return 0;
}