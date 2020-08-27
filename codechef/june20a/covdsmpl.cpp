#include<bits/stdc++.h>
using namespace std;

void fun(int r1, int c1, int r2, int c2, vector<vector<int> > &arr, bool &flag, int px) {
	if (flag) {
		return ;
	}
	// cout << 1 << " " << r1 << " " << c1 << " " << r2 << " " << c2 << endl;
	// cin >> x;
	// if (x == -1) {
	//     flag = true;
	//     return ;
	// }
	if (!px) {
		return ;
	}
	if (r1 == r2 && c1 == c2) {
		arr[r1 - 1][c1 - 1] = px;
		return ;
	}
	if (c1 == c2) {
		int m = (r2 - r1) / 2, x;
		cout << 1 << " " << r1 << " " << c1 << " " << r1 + m << " " << c2 << endl;
		cin >> x;
		if (x == -1) {
			flag = true;
			return ;
		}
		fun(r1, c1, r1 + m, c2, arr, flag, x);
		fun(r1 + m + 1, c1, r2, c2, arr, flag, px - x);
	} else {
		int m = (c2 - c1) / 2, x;
		cout << 1 << " " << r1 << " " << c1 << " " << r2 << " " << c1 + m << endl;
		cin >> x;
		if (x == -1) {
			flag = true;
			return ;
		}
		fun(r1, c1, r2, c1 + m, arr, flag, x);
		fun(r1, c1 + m + 1, r2, c2, arr, flag, px - x);

	}
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, p, x;
	cin >> t;
	while (t--) {
		cin >> n >> p;
		vector<vector<int> > arr(n, vector<int>(n, 0));
		// int k;
		// vector<int> cnt_prefix(n, 0);
		// for (k = n; k >= 1; k--) {
		//     cout << 1 << " " << 1 << " " << 1 << " " << k << " " << n << endl;
		//     cin >> x;
		//     if (x == -1)
		//         return 0;
		//     if (!x)
		//         break;
		//     cnt_prefix[k - 1] = x;
		// }

		// vector<int> cnt(n, 0);
		// cnt[0] = cnt_prefix[0];
		// for (int i = 1; i < n; i++) {
		//     cnt[i] = cnt_prefix[i] - cnt_prefix[i - 1];
		// }

		// for (auto &i : cnt) {
		//     cout << i << " ";
		// }
		// cout << endl;
		// int blk = 3;

		// int index = 0;
		// vector<pair<int, int> > a(blk * blk);
		// for (int i = 0; i < blk; i++) {
		//     for (int j = 0; j < blk; j++) {
		//         a[index].first = i;
		//         a[index++].second = j;
		//     }
		// }
		// reverse(a.begin(), a.end());

		// for (int i = 1; i < n; i += blk) {
		//     for (int j = 1; j < n; j += blk) {
		//         cout << 1 << " " << i << " " << j << " " << i + blk - 1 << " " << j + blk - 1 << endl;
		//         cin >> x;
		//         if (x == -1)
		//             return 0;
		//         if (x) {
		//             int count = x;
		//             int idx = 0;

		//             while (count) {
		//                 int r = i + a[idx].first, c = j + a[idx].second;
		//                 cout << 1 << " " << r << " " << c << " " << r << " " << c << endl;
		//                 cin >> x;
		//                 if (x == -1)
		//                     return 0;
		//                 if (x) {
		//                     count--;
		//                     arr[r - 1][c - 1] = x;
		//                 }
		//                 idx++;
		//             }
		//         }
		//     }
		// }
		bool flag = false;
		int x;
		cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
		cin >> x;
		if (x == -1) {
			return 0;
		}
		fun(1, 1, n, n, arr, flag, x);
		if (flag) {
			return 0;
		}
		cout << 2 << endl;
		for (auto &i : arr) {
			for (auto &j : i) {
				cout << j << " ";
			}
			cout << endl;
		}
		cin >> x;
		if (x == -1) {
			return 0;
		}
	}

	return 0;
}