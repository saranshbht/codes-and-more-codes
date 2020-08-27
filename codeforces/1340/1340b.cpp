#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		string s = "";
		for (int i = 0; i < b; i++) {
			s += (char)(i + 'a');
		}
		string bs(s);
		for (int i = 0; i < a / b - 1; i++) {
			s += bs;
		}
		for (int i = 0; i < a % b; i++) {
			s += (char)(i + 'a');
		}
		string as(s);
		// cout << as << endl;
		for (int i = 0; i < n / a - 1; i++) {
			s += as;
		}
		for (int i = 0; i < n % a; i++) {
			s += as[i];
		}
		cout << s << endl;
	}

	return 0;
}