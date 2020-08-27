#include<bits/stdc++.h>
using namespace std;
using namespace std:: chrono;
#define endl "\n"
#define ll long long
#define M (ll)(1e9 + 7)

int depth[10000], parent[10000];
vector<int> graph[10000];
void dfs(int v, int p, int d) {
	parent[v] = p;
	depth[v] = d;
	for (auto &i : graph[v])
		if (i != p) {
			dfs(i, v, d + 1);
		}
}

map<int, int> primeGraph[10000];
void dfs2(int v, int p, vector<map<int, int> > &primes) {
	for (auto &i : graph[v]) {
		if (i != p) {
			map<int, int> mp;
			for (auto &j : primeGraph[parent[i]]) {
				primeGraph[i][j.first] += j.second;
			}
			for (auto &j : primes[i]) {
				primeGraph[i][j.first] += j.second;
			}
			dfs2(i, v, primes);
		}
	}
}

ll getLCA(int a, int b) {
	while (a != b) {
		if (depth[a] < depth[b]) {
			b = parent[b];
		} else if (depth[a] > depth[b]) {
			a = parent[a];
		} else {
			a = parent[a];
			b = parent[b];
		}
	}
	return a;
}

ll getRes(map<int, int> &mp) {
	ll res = 1;
	for (auto &i : mp) {
		res = (res * (i.second + 1)) % M;
	}
	return res;
}

#define MAXN 1000001
int spf[MAXN];
void sieve() {
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++) {
		spf[i] = i;
	}
	for (int i = 4; i < MAXN; i += 2) {
		spf[i] = 2;
	}

	for (int i = 3; i * i < MAXN; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAXN; j += i)
				if (spf[j] == j) {
					spf[j] = i;
				}
		}
	}
}

map<int, int> getFactorization(int x) {
	map<int, int> mp;
	while (x != 1) {
		mp[spf[x]]++;
		x = x / spf[x];
	}
	return mp;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	// auto start = high_resolution_clock::now();
	sieve();
	// auto stop = high_resolution_clock::now();
	// auto duration = duration_cast<microseconds>(stop - start);
	// cout << duration.count() << endl;
	int t, q, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i < n; i++) {
			cin >> a >> b;
			graph[a - 1].push_back(b - 1);
			graph[b - 1].push_back(a - 1);
		}
		dfs(0, -1, 0);
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		vector<map<int, int> > primes(n);
		for (int i = 0; i < n; i++) {
			primes[i] = getFactorization(arr[i]);
		}
		primeGraph[0] = primes[0];
		dfs2(0, -1, primes);
		// for(int i = 0; i < n; i++){
		//     for(auto &a : primeGraph[i]){
		//         cout << a.first << " " << a.second << endl;
		//     }
		//     cout << endl;
		// }
		cin >> q;
		vector<vector<int> > lca(n, vector<int>(n , -1));
		while (q--) {
			cin >> a >> b;
			a--; b--;
			if (a == b) {
				cout << getRes(primes[a]) << endl;
				continue;
			}
			int c;
			if (lca[a][b] != -1) {
				c = lca[a][b];
			} else if (lca[b][a] != -1) {
				c = lca[b][a];
			} else {
				c = getLCA(a, b);
				lca[a][b] = c;
			}
			map<int, int> mp;
			if (c == a) {
				if (a == 0) {
					cout << getRes(primeGraph[b]);
				} else {
					mp = primeGraph[b];
					for (auto &i : primeGraph[parent[a]]) {
						mp[i.first] -= i.second;
					}
					cout << getRes(mp);
				}
			} else if (c == b) {
				if (b == 0) {
					cout << getRes(primeGraph[a]);
				} else {
					mp = primeGraph[a];
					for (auto &i : primeGraph[parent[b]]) {
						mp[i.first] -= i.second;
					}
					cout << getRes(mp);
				}
			} else {
				mp = primeGraph[a];
				for (auto &i : primeGraph[b]) {
					mp[i.first] += i.second;
				}
				for (auto &i : primes[c]) {
					mp[i.first] -= i.second;
				}
				cout << getRes(mp);
			}
			cout << endl;
		}
	}

	return 0;
}