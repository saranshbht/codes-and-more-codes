#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, a;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a;
		s.insert(a);
	}
	if (s.size() <= 2) {
		cout << "YES";
	} else if (s.size() > 3) {
		cout << "NO";
	} else {
		int arr[3];
		auto it = s.begin();
		arr[0] = *it++;
		arr[1] = *it++;
		arr[2] = *it;
		sort(arr, arr + 3);
		if (arr[1] - arr[0] == arr[2] - arr[1]) {
			cout << "YES";
		} else {
			cout << "NO";
		}
	}
	cout << endl;


	return 0;
}