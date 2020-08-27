#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<int> f(n);
		for (int i = 0; i < n; i++) {
			cin >> f[i];
		}


		vector<vector<int> > costs(n, vector<int>(n, 0));
		for (int i = 0; i < n; i++) {
			costs[i][i] = k;
			map<int, int> mp;
			mp[f[i]]++;
			for (int j = i + 1; j < n; j++) {
				costs[i][j] = costs[i][j - 1];
				if (mp[f[j]]) {
					costs[i][j]++;
					if (mp[f[j]] == 1) {
						costs[i][j]++;
					}
				}
				mp[f[j]]++;
			}
		}

		vector<int> minCost(n);
		for (int i = 0; i < n; i++) {
			minCost[i] = costs[0][i];
		}

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				minCost[j] = min(minCost[j], minCost[i] + costs[i + 1][j]);
			}
		}

		cout << minCost[n - 1] << endl;

		// vector<map<int, int> > v;
		// map<int, int> mp;
		// int cost = 0;
		// for (int i = 0; i < n; i++) {
		//  if (mp[f[i]]) {
		//      if (mp[f[i]] == 1) {
		//          cost += 2;
		//      } else {
		//          cost += 1;
		//      }
		//  }
		//  mp[f[i]]++;
		//  if (cost > k) {
		//      map<int, int> old_mp(mp), new_mp;
		//      map<int, int> max_state_old_mp, max_state_new_mp;
		//      int maxm_reduction = INT_MIN;
		//      int reduction = 0;
		//      for (int j = i; j >= 0; j--) {
		//          new_mp[f[j]]++;
		//          old_mp[f[j]]--;
		//          if (new_mp[f[j]] == 2) {
		//              reduction -= 2;
		//          } else if (new_mp[f[j]] > 2) {
		//              reduction -= 1;
		//          }
		//          if (old_mp[f[j]] == 1) {
		//              reduction += 2;
		//          } else if (old_mp[f[j]] > 1) {
		//              reduction += 1;
		//          }
		//          if (reduction > maxm_reduction) {
		//              maxm_reduction = reduction;
		//              max_state_old_mp = old_mp;
		//              max_state_new_mp = new_mp;
		//          }
		//      }
		//      cout << i << " " << maxm_reduction << endl;
		//      if (maxm_reduction > k) {
		//          v.push_back(max_state_old_mp);
		//          cout << v.size() << endl;
		//          mp = max_state_new_mp;
		//          cost = 0;
		//          for (auto &j : mp) {
		//              if (j.second != 1) {
		//                  cost += j.second;
		//              }
		//          }
		//          cout << cost << endl;
		//      }
		//  }
		// }
		// int least_cost = 0;
		// v.push_back(mp);
		// for (auto &i : v) {
		//  for (auto &j : i) {
		//      if (j.second != 1) {
		//          least_cost += j.second;
		//      }
		//  }
		// }
		// cout << least_cost + k * v.size() << endl;
	}

	return 0;
}