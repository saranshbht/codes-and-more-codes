#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int N = 200005;
int tree[N];
void update(int pos, int val) {
	tree[pos] = val;
	for (; pos > 1; pos >>= 1) {
		tree[pos >> 1] = tree[pos] + tree[pos ^ 1];
	}
}

int query(int l, int r) {
	int res = 0;
	for (; l < r; l >>= 1, r >>= 1) {
		if (l & 1) {
			res += tree[l++];
		}
		if (r & 1) {
			res += tree[--r];
		}
	}
	return res;
}

struct node {
	int point, index, type;
	bool operator<(const node &b) const {
		return (point < b.point)
		       || ((point == b.point) && (type < b.type))
		       || ((point == b.point) && (type == b.type) && (index < b.index));
	}
};

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, x1, x2, y;
	cin >> t;
	while (t--) {
		fill(tree, tree + N, 0);
		cin >> n >> q;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		set<node> s;
		for (int i = 0; i < n - 1; i++) {
			node n, n1;
			n.point = min(arr[i], arr[i + 1]);
			n.index = i + 1;
			n.type = 1;
			n1.point = max(arr[i], arr[i + 1]);
			n1.index = i + 1;
			n1.type = 3;
			s.insert(n);
			s.insert(n1);
		}

		map<int, pair<int, int> > mp;
		for (int i = 0; i < q; i++) {
			cin >> x1 >> x2 >> y;
			node n;
			n.index = i;
			n.point = y;
			n.type = 2;
			mp[i] = make_pair(x1, x2);
			s.insert(n);
		}

		vector<int> res(q, 0);
		for (auto &i : s) {
			if (i.type == 1) {
				update(i.index + n - 1, 1);
			} else if (i.type == 3) {
				update(i.index + n - 1, 0);
			} else if (i.type == 2) {
				pair<int, int> lr = mp[i.index];
				res[i.index] = query(lr.first + n - 1, lr.second + n - 1);
			}
		}

		for (int i = 0; i < q; i++) {
			cout << res[i] << endl;
		}

	}

	return 0;
}