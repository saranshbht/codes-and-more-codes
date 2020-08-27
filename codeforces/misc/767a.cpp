#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int num = n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		if (arr[i] == num) {
			cout << num << " ";
			num--;
			while (s.find(num) != s.end()) {
				cout << num << " ";
				s.erase(num);
				num--;
			}
			cout << endl;
		} else {
			cout << endl;
			s.insert(arr[i]);
		}
	}

	return 0;
}