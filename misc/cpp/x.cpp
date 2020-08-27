#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int SIZE = 200003;
int tr[SIZE];
void modify(int p, int value) {
    tr[p] = value;
    for (; p > 1; p >>= 1)
        tr[p >> 1] = tr[p] + tr[p ^ 1];
}

int range(int left, int right) {
    int ans = 0;
    for (; left < right; left >>= 1, right >>= 1) {
        if (left & 1)
            ans += tr[left++];
        if (right & 1)
            ans += tr[--right];
    }
    return ans;
}

struct node {
    int ycoord, xcoord, type;
    bool operator<(const node &b) const {
        return (ycoord < b.ycoord)
               || ((ycoord == b.ycoord) && (type < b.type))
               || ((ycoord == b.ycoord) && (type == b.type) && (xcoord < b.xcoord));
    }
};

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, q, x1, x2, y;
    cin >> t;
    while (t--) {
        fill(tr, tr + SIZE, 0);
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        set<node> s;
        for (int i = 0; i < n - 1; i++) {
            node n, n1;
            n.ycoord = min(arr[i], arr[i + 1]);
            n.xcoord = i + 1;
            n.type = 1;
            n1.ycoord = max(arr[i], arr[i + 1]);
            n1.xcoord = i + 1;
            n1.type = 3;
            s.insert(n);
            s.insert(n1);
        }

        map<int, pair<int, int> > mp;
        for (int i = 0; i < q; i++) {
            cin >> x1 >> x2 >> y;
            node n;
            n.xcoord = i;
            n.ycoord = y;
            n.type = 2;
            mp[i] = make_pair(x1, x2);
            s.insert(n);
        }

        vector<int> res(q, 0);
        for (auto &i : s) {
            if (i.type == 1) {
                modify(i.xcoord + n - 1, 1);
            }
            else if (i.type == 3) {
                modify(i.xcoord + n - 1, 0);
            }
            else if (i.type == 2) {
                pair<int, int> pr = mp[i.xcoord];
                res[i.xcoord] = range(pr.first + n - 1, pr.second + n - 1);
            }
        }

        for (int i = 0; i < q; i++)
            cout << res[i] << endl;

    }

    return 0;
}