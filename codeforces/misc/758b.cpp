#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int a, b, c, d;
	string s;
	cin >> s;
	a = b = c = d = 0;
	int n = s.size();
	int i = 0;
	while (s[i] != 'R') {
		i++;
	}
	a += i / 4;
	i += 4;
	while (i < n) {
		if (s[i] == '!') {
			a++;
		}
		i += 4;
	}

	i = 0;
	while (s[i] != 'B') {
		i++;
	}
	b += i / 4;
	i += 4;
	while (i < n) {
		if (s[i] == '!') {
			b++;
		}
		i += 4;
	}

	i = 0;
	while (s[i] != 'Y') {
		i++;
	}
	c += i / 4;
	i += 4;
	while (i < n) {
		if (s[i] == '!') {
			c++;
		}
		i += 4;
	}

	i = 0;
	while (s[i] != 'G') {
		i++;
	}
	d += i / 4;
	i += 4;
	while (i < n) {
		if (s[i] == '!') {
			d++;
		}
		i += 4;
	}

	cout << a << " " << b << " " << c << " " << d << endl;
	return 0;
}