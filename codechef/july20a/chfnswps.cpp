#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, a;
	cin >> t;
	while (t--) {
		cin >> n;
		int minm = INT_MAX;
		map<int, int> map_a, map_b;
		for (int i = 0; i < n; i++) {
			cin >> a;
			map_a[a]++;
			minm = min(minm, a);
		}

		for (int i = 0; i < n; i++) {
			cin >> a;
			map_b[a]++;
			minm = min(minm, a);
		}

		bool flag = false;
		map<int, int> diff_ab, diff_ba;
		for (auto &i : map_a) {
			int diff = i.second - map_b[i.first];
			if (diff & 1) {
				flag = true;
				break;
			}
			if (diff > 0) {
				diff_ab[i.first] = diff / 2;
			}
		}
		if (flag) {
			cout << -1 << endl;
			continue;
		}
		if (!diff_ab.size()) {
			cout << 0 << endl;
			continue;
		}
		for (auto &i : map_b) {
			int diff = i.second - map_a[i.first];
			if (diff & 1) {
				flag = true;
				break;
			}
			if (diff > 0) {
				diff_ba[i.first] = diff / 2;
			}
		}
		if (flag) {
			cout << -1 << endl;
			continue;
		}

		long long cost = 0;
		vector<int> b_list, a_list;
		for (auto &i : diff_ab) {
			a_list.push_back(i.first);
		}
		for (auto &i : diff_ba) {
			b_list.push_back(i.first);
		}
		int idx_a = 0, idx_b = b_list.size() - 1;
		for (; idx_a < a_list.size(); idx_a++) {
			int i = a_list[idx_a];
			int j = b_list[idx_b];
			while (idx_b >= 0 && diff_ab[i] >= diff_ba[j]) {
				cost += 1ll * diff_ba[j] * min(min(i, j), 2 * minm);
				diff_ab[i] -= diff_ba[j];
				idx_b--;
				j = b_list[idx_b];
			}
			if (idx_b == -1) {
				break;
			}
			diff_ba[j] -= diff_ab[i];
			cost += 1ll * diff_ab[i] * min(min(i, j), 2 * minm);
		}

		cout << cost << endl;
		//   long long total_a = 0, total_b = 0;
		//   for (auto &i : diff_ab) {
		//     if (i.first <= minm * 2) {
		//       a_list.push_back(i.first);
		//     }
		//     else
		//       total_a += i.second;
		//    }

		//   for (auto &i : diff_ba) {
		//     if (i.first <= minm * 2) {
		//       b_list.push_back(i.first);
		//     }
		//     else
		//       total_b += i.second;
		//    }

		//   long long cost = 0;
		//   int idx_a = 0;
		//   int idx_b = 0;
		//   for (; idx_a < a_list.size(); idx_a++) {
		//     if (total_b >= diff_ab[a_list[idx_a]]) {
		//       total_b -= diff_ab[a_list[idx_a]];
		//       cost += 1ll * diff_ab[a_list[idx_a]] * a_list[idx_a];
		//     }
		//     else {
		//       diff_ab[a_list[idx_a]] -= total_b;
		//       cost += 1ll * total_b * a_list[idx_a];
		//       total_b = 0;
		//       break;
		//     }
		//   }
		//   // cout << cost << endl;
		//   for (; idx_b < b_list.size(); idx_b++) {
		//     if (total_a >= diff_ba[b_list[idx_b]]) {
		//       total_a -= diff_ba[b_list[idx_b]];
		//       cost += 1ll * diff_ba[b_list[idx_b]] * b_list[idx_b];
		//     }
		//     else {
		//       diff_ba[b_list[idx_b]] -= total_a;
		//       cost += 1ll * total_a * b_list[idx_b];
		//       total_a = 0;
		//       break;
		//     }
		//   }
		//   // cout << cost << endl;
		//   if (idx_a < a_list.size()) {
		// int extra_cost_ab = 0;
		// int extra_cost_ba = 0;
		// map<int, int> diff_ab_copy(diff_ab);
		// map<int, int> diff_ba_copy(diff_ba);
		//    int index_a = idx_a;
		//    int index_b = b_list.size() - 1;
		//    for (; index_a < a_list.size(); index_a++) {
		//      int i = a_list[index_a];
		//      int j = b_list[index_b];
		//      while (index_b >= idx_b && diff_ab_copy[i] >= diff_ba_copy[j]) {
		//        extra_cost_ab += 1ll * diff_ba_copy[j] * min(i, j);
		//        diff_ab_copy[i] -= diff_ba_copy[j];
		//        index_b--;
		//        j = b_list[index_b];
		//      }
		//      // cout << cost << endl;
		//      if (index_b == idx_b - 1)
		//        break;
		//      diff_ba_copy[j] -= diff_ab_copy[i];
		//      extra_cost_ab += 1ll * diff_ab_copy[i] * min(i, j);
		//    }

		//    index_a = a_list.size() - 1;
		//    index_b = idx_b;
		//    for (; index_b < b_list.size(); index_b++) {
		//      int i = b_list[index_b];
		//      int j = a_list[index_a];
		//      while (index_a >= idx_a && diff_ba[i] >= diff_ab[j]) {
		//        extra_cost_ba += 1ll * diff_ab[j] * min(i, j);
		//        diff_ba[i] -= diff_ab[j];
		//        index_a--;
		//        j = a_list[index_a];
		//      }
		//      // cout << cost << endl;
		//      if (index_a == idx_a - 1)
		//        break;
		//      diff_ab[j] -= diff_ba[i];
		//      extra_cost_ba += 1ll * diff_ba[i] * min(i, j);
		//    }

		//    cost += min(extra_cost_ba, extra_cost_ab);
		//   }
		//   else {
		//     cost += 1ll * minm * total_a;
		//     cost += 1ll * minm * total_b;
		//   }
		// cout << cost << endl;
	}

	return 0;
}