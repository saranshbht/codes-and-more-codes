#include <bits/stdc++.h>

using namespace std;

#define deb(x) (cerr << #x << " = " << (x) << ", Line: " << __LINE__ << '\n')

string gen, ans;

inline bool is_square(int x) {
	int y = sqrt(x);
	return y * y == x;
}

inline int get_val(const string &s) {
	int ans = 0;
	for (const int c : s) {
		ans += (c - 48) * (c - 48);
	}
	return ans;
}

inline int rect(int x) {
	return x < 0 ? 0 : x;
}

void dfs(int pos, int lim, int n) {
	if (pos == lim) {
		return;
	}
	for (int i = pos; i < lim; i++) {
		for (char j = '1'; j <= '9'; j++) {
			gen[(int) gen.size() - 1 - i] = j;
//            deb(gen);
			if (is_square(get_val(gen))) {
				ans = min(ans, gen);
			}
			dfs(pos + 1, lim, n);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int tt;
	// cin >> tt;
	tt = 100;
	while (tt--) {
		int n = 100 - tt;
		// cin >> n;
		ans = "a";
		gen = string(n, '1');
//        deb(gen.size());
		for (int i = 0; i < n; i++) {
			dfs(0, i + 1, n);
			if (ans != "a") {
				break;
			}
		}
		if (ans == "a") {
			ans = "-1";
		}
		cout << n <<  "  " << ans << '\n';
	}
	return 0;
}
