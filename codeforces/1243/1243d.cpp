#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
struct edge {
	int src, dest, weight;
}

class DisjointSet {
		unordered_map<int, int> parent;
	public:
		void makeSet(int n) {
			for (int i = 0; i < n; i++) {
				parent[i] = i;
			}
		}

		int Find(int i) {
			if (parent[i] == i) {
				return i;
			}
			return find(parent[i]);
		}
		void Union(int a, int b) {
			int x = Find(a);
			int y = Find(b);
			parent[x] = y;
		}
};

vector<edge> kruskal(vector<edge> edges, int n) {
	vector<edge> mst;
	DisjointSet ds;
	ds.makeSet(n);
	while (mst.size() != n - 1) {
		edge nextEdge = edges.back();
		edges.pop_back();
		int x = ds.Find(nextEdge.src);
		int y = ds.Find(nextEdge.dest);
		if (x != y) {
			mst.push_back(nextEdge);
			ds.Union(x, y);
		}
	}
	return mst;
}
bool compare(edge &a, edge &b) {
	return a.weight > b.weight;
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;



	return 0;
}