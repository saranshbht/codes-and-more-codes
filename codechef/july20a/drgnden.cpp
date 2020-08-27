#include<bits/stdc++.h>
using namespace std;
#define endl "\n"


// Segment tree implementation from
// https://codeforces.com/blog/entry/18051

const int N = 200005;  // limit for array size
int n;  // array size
long long t[2 * N];
long long n_t[2 * N];

void build(int type = 1) {
	if (type) {
		for (int i = n - 1; i > 0; --i) { t[i] = t[i << 1] + t[i << 1 | 1]; }
	} else {
		for (int i = n - 1; i > 0; --i) { n_t[i] = n_t[i << 1] + n_t[i << 1 | 1]; }
	}
}

void modify(int p, long long value, int type = 1) {
	if (type) {
		for (t[p += n] = value; p > 1; p >>= 1) { t[p >> 1] = t[p] + t[p ^ 1]; }
	} else {
		for (n_t[p += n] = value; p > 1; p >>= 1) { n_t[p >> 1] = n_t[p] + n_t[p ^ 1]; }
	}
}

long long segment_tree_query(int l, int r, int type = 1) {
	long long res = 0;
	if (type) {
		for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
			if (l & 1) { res += t[l++]; }
			if (r & 1) { res += t[--r]; }
		}
	} else {
		for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
			if (l & 1) { res += n_t[l++]; }
			if (r & 1) { res += n_t[--r]; }
		}
	}
	return res;
}


// HLD implementation from
// https://cp-algorithms.com/graph/hld.html

vector<int> parent, depth, heavy, head, pos;
int cur_pos;

vector<int> n_parent, n_depth, n_heavy, n_head, n_pos;
int n_cur_pos;

int dfs(int v, vector<vector<int>> const& adj, int type = 1) {
	int size = 1;
	int max_c_size = 0;
	if (type) {
		for (int c : adj[v]) {
			parent[c] = v, depth[c] = depth[v] + 1;
			int c_size = dfs(c, adj);
			size += c_size;
			if (c_size > max_c_size) {
				max_c_size = c_size, heavy[v] = c;
			}
		}
	} else {
		for (int c : adj[v]) {
			n_parent[c] = v, n_depth[c] = n_depth[v] + 1;
			int c_size = dfs(c, adj, 0);
			size += c_size;
			if (c_size > max_c_size) {
				max_c_size = c_size, n_heavy[v] = c;
			}
		}
	}
	return size;
}

void decompose(int v, int h, vector<vector<int>> const& adj, int type = 1) {
	if (type) {
		head[v] = h, pos[v] = cur_pos++;
		if (heavy[v] != -1) {
			decompose(heavy[v], h, adj);
		}
		for (int c : adj[v]) {
			if (c != parent[v] && c != heavy[v]) {
				decompose(c, c, adj);
			}
		}
	} else {
		n_head[v] = h, n_pos[v] = n_cur_pos++;
		if (n_heavy[v] != -1) {
			decompose(n_heavy[v], h, adj, 0);
		}
		for (int c : adj[v]) {
			if (c != n_parent[v] && c != n_heavy[v]) {
				decompose(c, c, adj, 0);
			}
		}
	}
}

void init(vector<vector<int>> const& adj, int type = 1) {
	int n = adj.size();
	if (type) {
		parent = vector<int>(n);
		depth = vector<int>(n);
		heavy = vector<int>(n, -1);
		head = vector<int>(n);
		pos = vector<int>(n);
		cur_pos = 0;
		dfs(0, adj);
		decompose(0, 0, adj);
	} else {
		n_parent = vector<int>(n);
		n_depth = vector<int>(n);
		n_heavy = vector<int>(n, -1);
		n_head = vector<int>(n);
		n_pos = vector<int>(n);
		n_cur_pos = 0;
		dfs(0, adj, 0);
		decompose(0, 0, adj, 0);
	}
}

long long query(int a, int b, int type = 1) {
	long long res = 0;
	if (type) {
		for (; head[b] != 0 && head[a] != head[b]; b = parent[head[b]]) {
			// cout << a << " " << b << endl;
			// cout << head[a] << " " << head[b] << endl;
			// cout << res << endl;
			if (depth[head[a]] > depth[head[b]]) {
				return -1;
			}
			res += segment_tree_query(pos[head[b]] - 1, pos[b]);
		}
		// cout << a << " " << b << endl;
		//    cout << head[a] << " " << head[b] << endl;
		//    cout << res << endl;
		if (head[a] != head[b] || depth[a] > depth[b]) {
			return -1;
		}
		res += segment_tree_query(pos[a] - 1, pos[b]);
	} else {
		for (; n_head[b] != 0 && n_head[a] != n_head[b]; b = n_parent[n_head[b]]) {
			// cout << a << " " << b << endl;
			// cout << head[a] << " " << head[b] << endl;
			// cout << res << endl;
			if (n_depth[n_head[a]] > n_depth[n_head[b]]) {
				return -1;
			}
			res += segment_tree_query(n_pos[n_head[b]] - 1, n_pos[b], 0);
		}
		// cout << a << " " << b << endl;
		//    cout << head[a] << " " << head[b] << endl;
		//    cout << res << endl;
		if (n_head[a] != n_head[b] || n_depth[a] > n_depth[b]) {
			return -1;
		}
		res += segment_tree_query(n_pos[a] - 1, n_pos[b], 0);
	}
	return res;
}


int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int q;
	cin >> n >> q;
	vector<int> tastes(n);
	vector<int> heights(n);
	for (int i = 0; i < n; i++) {
		cin >> heights[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> tastes[i];
	}
	vector<vector<int> > n_graph(n + 1);
	stack<int> s;
	s.push(0);
	for (int i = 1; i < n; i++) {
		// cout << "hello";
		while (!s.empty() && heights[s.top()] < heights[i]) {
			n_graph[i + 1].push_back(s.top() + 1);
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		n_graph[0].push_back(s.top() + 1);
		s.pop();
	}
	// for (int i = 0; i <= n; i++) {
	// 	cout << i << "-->";
	// 	for (auto &j : n_graph[i]) {
	// 		cout << j << " ";
	// 	}
	// 	cout << endl;
	// }
	init(n_graph, 0);
	for (int i = 1; i <= n; i++) {
		n_t[n + n_pos[i] - 1] = tastes[i - 1];
	}
	build(0);
	// for (int i = 0; i < 2 * n; i++) {
	// 	cout << n_t[i] << " ";
	// }
	// cout << endl;
	vector<vector<int> > graph(n + 1);
	s.push(n - 1);
	for (int i = n - 2; i >= 0; i--) {
		// cout << "hello";
		while (!s.empty() && heights[s.top()] < heights[i]) {
			graph[i + 1].push_back(s.top() + 1);
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()) {
		graph[0].push_back(s.top() + 1);
		s.pop();
	}
	// for (int i = 0; i <= n; i++) {
	// 	cout << i << "-->";
	// 	for (auto &j : graph[i])
	// 		cout << j << " ";
	// 	cout << endl;
	// }
	init(graph);
	for (int i = 1; i <= n; i++) {
		t[n + pos[i] - 1] = tastes[i - 1];
	}
	build();
	// for (int i = 0; i < 2 * n; i++)
	// 	cout << t[i] << " ";
	// cout << endl;
	for (int i = 0; i < q; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 1) {
			modify(pos[b] - 1, c);
			modify(n_pos[b] - 1, c, 0);
			// for (int i = 0; i < 2 * n; i++)
			//    	cout << t[i] << " ";
			//   	cout << endl;
			//   	for (int i = 0; i < 2 * n; i++)
			//    	cout << n_t[i] << " ";
			//   	cout << endl;
		} else {
			if (c - b >= 0) {
				cout << query(b, c);
			} else {
				cout << query(b, c, 0);
			}
			cout << endl;
		}
	}
	return 0;
}