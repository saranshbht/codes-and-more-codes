#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	int r = n / 2, l = n, prevr = 0;
	int i = 1;
	while (1) {
		if (a <= r) {
			if (b <= r) {
				l = r;
				r -= (r - prevr) / 2;
			} else {
				break;
			}
		} else {
			prevr = r;
			r += (l - r) / 2;
		}
		i++;
	}
	if (r == n / 2) {
		cout << "Final!";
	} else {
		cout << int(log2(n)) - i + 1;
	}
	return 0;
}