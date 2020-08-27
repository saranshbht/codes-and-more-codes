#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n;
	string a, s;
	cin >> t;
	while (t--) {
		cin >> n;
		cin >> a;
		char arr[10];
		sprintf(arr, a.c_str());
		// cout << arr << endl;
		for (int i = 1; i < n; i++) {
			cin >> s;
			for (int j = 0; j < 10; j++)
				arr[j] = (char)(((arr[j] - '0') ^ (s[j] - '0')) + '0');
		}
		int count = 0;
		for (int i = 0; i < 10; i++)
			if (arr[i] - '0')
				count++;
		cout << count << endl;
	}

	return 0;
}