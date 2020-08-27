// HLD implementation from
// https://www.codechef.com/viewsolution/1175784


// Factorization implementation from GeeksForGeeks
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define MAX 100000
#define MAXN 1000001
#define M (ll)(1e9 + 7)
typedef struct {
	unordered_map<int, int> mp;
} node;

vector<vector<node> > segs;
vector<vector<int> > chains;
int n;
vector<int> val, parent, depth, ts, skip, spf(MAXN);
vector<unordered_map<int, int> >primes;
vector<vector<int> > heavy, nextt;

void treeInit(int x = 0, int p = -1, int d = 0) {
	ts[x] = 1;
	parent[x] = p; depth[x] = d;
	for (int i = 0; i < nextt[x].size(); i++) {
		int y = nextt[x][i];
		if (y == p) { continue; }
		treeInit(y, x, d + 1);
		ts[x] += ts[y];
	}
}

void HLDecomp(int x = 0, int p = -1) {
	if (x == 0) {
		for (int i = 0; i < n; i++) {
			heavy[i][0] = -1;
			skip[i] = -1;
		}
	}
	for (int i = 0; i < nextt[x].size(); i++) {
		int y = nextt[x][i];
		if (y == p) { continue; }
		heavy[y][0] = -1;
		skip[y] = x;
		if (2 * ts[y] > ts[x]) {
			if (heavy[x][0] == -1) { // new chain
				heavy[x][0] = chains.size(); heavy[x][1] = 0;
				heavy[y][0] = chains.size(); heavy[y][1] = 1;
				vector<int> chain;
				chain.push_back(x); chain.push_back(y);
				chains.push_back(chain);
			} else { // extend chain
				skip[y] = skip[x];
				heavy[y][0] = heavy[x][0];
				heavy[y][1] = heavy[x][1] + 1;
				chains[heavy[y][0]].push_back(y);
			}
		}
		HLDecomp(y, x);
	}
}

void mergeNodes(vector<node> &seg, int id) {
	int id1 = id * 2, id2 = id * 2 + 1;
	for (auto &i : seg[id1].mp) {
		seg[id].mp[i.first] += i.second;
	}
	for (auto &i : seg[id2].mp) {
		seg[id].mp[i.first] += i.second;
	}
}

void buildSegTree(vector<node> &seg, vector<int> &chain, int l, int r, int id = 1) {
	if (l + 1 == r) {
		seg[id].mp = primes[chain[l]];
	} else {
		int c = (l + r) / 2;
		buildSegTree(seg, chain, l, c, id * 2);
		buildSegTree(seg, chain, c, r, id * 2 + 1);
		mergeNodes(seg, id);
	}
}

unordered_map<int, int> querySegTree(vector<node> &seg, int x, int y, int l, int r, int id = 1) {
	if (x <= l && r <= y) {
		return seg[id].mp;
	} else if (r <= x || y <= l) {
		unordered_map<int, int> mp;
		return mp;
	} else {
		int c = (l + r) / 2;
		unordered_map<int, int> g1 = querySegTree(seg, x, y, l, c, id * 2);
		unordered_map<int, int> g2 = querySegTree(seg, x, y, c, r, id * 2 + 1);
		// seg[id].todo=0;
		unordered_map<int, int> mp;
		for (auto &i : g1) {
			mp[i.first] += i.second;
		}
		for (auto &i : g2) {
			mp[i.first] += i.second;
		}
		return mp;
	}
}

unordered_map<int, int> query(int a, int b) {
	unordered_map<int, int> r;
	while (1) {
		unordered_map<int, int> v;
		if (a == b && heavy[a][0] == -1) {
			v = primes[a];
			for (auto &i : v) {
				r[i.first] += i.second;
			}
			break;
		}
		if (heavy[a][0] == heavy[b][0] && heavy[a][0] != -1) {
			if (depth[a] < depth[b]) { swap(a, b); }
			int ch = heavy[a][0];
			v = querySegTree(segs[ch], heavy[a][1], heavy[b][1] + 1, 0, chains[ch].size());
			for (auto &i : v) {
				r[i.first] += i.second;
			}
			break;
		}
		int pa = skip[a], pb = skip[b];
		int ma = (pa != -1), mb = (pb != -1);
		if (ma && mb) {
			if (depth[pa] < depth[pb]) { ma = 0; } else { mb = 0; }
		}
		if (mb) { swap(a, b); }
		if (heavy[a][0] == -1) {
			v = primes[a];
		} else {
			int ch = heavy[a][0];
			if (heavy[a][1] == chains[ch].size() - 1) {
				v = querySegTree(segs[ch], chains[ch].size() - 1, chains[ch].size(), 0, chains[ch].size());
			} else {
				v = querySegTree(segs[ch], heavy[a][1], chains[ch].size() - 1, 0, chains[ch].size());
			}
		}
		for (auto &i : v) {
			r[i.first] += i.second;
		}
		a = skip[a];
	}
	return r;
}

void sieve() {
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++) {
		spf[i] = i;
	}
	for (int i = 4; i < MAXN; i += 2) {
		spf[i] = 2;
	}

	for (int i = 3; i * i < MAXN; i += 2) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAXN; j += i)
				if (spf[j] == j) {
					spf[j] = i;
				}
		}
	}
}

unordered_map<int, int> getFactorization(int x) {
	unordered_map<int, int> mp;
	while (x != 1) {
		mp[spf[x]]++;
		x = x / spf[x];
	}
	return mp;
}


ll getRes(unordered_map<int, int> mp) {
	ll res = 1;
	for (auto &i : mp) {
		res = (res * (i.second + 1)) % M;
	}
	return res;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	sieve();
	int t;
	cin >> t;
	while (t--) {
		segs.clear();
		chains.clear();
		val.clear();
		val.resize(MAX);
		parent.clear();
		parent.resize(MAX);
		depth.clear();
		depth.resize(MAX);
		ts.clear();
		ts.resize(MAX);
		skip.clear();
		skip.resize(MAX);
		primes.clear();
		primes.resize(MAX);
		heavy.clear();
		heavy.resize(MAX);
		for (auto &i : heavy) {
			i.resize(2);
		}
		nextt.clear();
		nextt.resize(MAX);
		cin >> n;
		for (int i = 1; i < n; i++) {
			int a, b;
			cin >> a >> b;
			nextt[a - 1].push_back(b - 1);
			nextt[b - 1].push_back(a - 1);
		}
		for (int i = 0; i < n; i++) {
			cin >> val[i];
		}
		for (int i = 0; i < n; i++) {
			primes[i] = getFactorization(val[i]);
		}
		// Heavy-Light decomposition
		treeInit();
		HLDecomp();
		for (int i = 0; i < chains.size(); i++) {
			vector<int> &chain = chains[i];
			reverse(chain.begin(), chain.end());
		}
		for (int i = 0; i < n; i++) if (heavy[i][0] != -1) {
				heavy[i][1] = chains[heavy[i][0]].size() - 1 - heavy[i][1];
			}
		// build segment trees
		for (int i = 0; i < chains.size(); i++) {
			vector<int> &chain = chains[i];
			vector<node> seg(4 * chain.size());
			buildSegTree(seg, chain, 0, chain.size());
			segs.push_back(seg);
		}
		int q;
		cin >> q;
		for (int i = 0; i < q; i++) {
			int a, b;
			cin >> a >> b;
			cout << getRes(query(a - 1, b - 1)) << endl;
		}
	}
	return 0;
}
