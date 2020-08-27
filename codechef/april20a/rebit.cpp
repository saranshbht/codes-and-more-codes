#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define M (ll)(998244353)

ll exp(ll b, ll e) {
	ll ans = 1;
	b = b % M;
	while (e) {
		if (e & 1)
			ans = (ans * b) % M;
		e >>= 1;
		b = (b * b) % M;
	}
	return ans;
}

struct vals {
	ll a, b, c, d;
};

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	string l;
	cin >> t;
	while (t--) {
		cin >> l;
		int n = l.size();
		vector<char> operators;
		vector<vals> values;
		for (int i = 0; i < n; i++) {
			if ((l[i] == '^') || (l[i] == '&') || (l[i] == '|'))
				operators.push_back(l[i]);
			else if (l[i] == '#') {
				vals x;
				x.a = x.b = x.c = 1;
				x.d = 4;
				values.push_back(x);
			} else if (l[i] == ')') {
				vals x, y, z;
				x = values[values.size() - 1];
				values.pop_back();
				y = values[values.size() - 1];
				values.pop_back();
				char ch = operators[operators.size() - 1];
				operators.pop_back();
				if (ch == '^') {
					z.a = ((x.a * y.a) % M + (x.b * y.b) % M + (2 * x.c * y.c) % M) % M;
					z.b = ((x.a * y.b) % M + (x.b * y.a) % M + (2 * x.c * y.c) % M) % M;
					z.c = ((x.a * y.c) % M + (x.c * y.a) % M + (x.b * y.c) % M + (x.c * y.b) % M) % M;
					z.d = (x.d * y.d) % M;
				} else if (ch == '&') {
					z.a = ((x.a * y.d) % M + (y.a * x.d) % M - (x.a * y.a) % M + (2 * x.c * y.c) % M + M) % M;
					z.b = (x.b * y.b) % M;
					z.c = ((x.c * y.b) % M + (x.b * y.c) % M + (x.c * y.c) % M) % M;
					z.d = (x.d * y.d) % M;
				} else {
					z.a = (x.a * y.a) % M;
					z.b = ((x.b * y.d) % M + (y.b * x.d) % M - (x.b * y.b) % M + (2 * x.c * y.c) % M + M) % M;
					z.c = ((x.a * y.c) % M + (x.c * y.a) % M + (x.c * y.c) % M) % M;
					z.d = (x.d * y.d) % M;
				}
				values.push_back(z);
			}
		}
		// cout << values[0].a << " " << values[0].b << " " << values[0].c << " " << values[0].d << endl;
		ll expVal = exp(values[0].d, M - 2);
		ll aa = (values[0].a * expVal) % M;
		ll bb = (values[0].b * expVal) % M;
		ll cc = (values[0].c * expVal) % M;
		cout << aa << " " << bb << " " << cc << " " << cc << endl;
	}

	return 0;
}