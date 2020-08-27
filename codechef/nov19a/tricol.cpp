#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, X, Y, p, q;
    string s;
    cin >> n >> m;
    cin >> X >> Y >> p >> q;
    cin >> s;
    int x, y;
    for (int i = 0; i < n; i++)
        cin >> x >> y;
    int a, b, c;
    for (int i = 0; i < m; i++)
        cin >> a >> b >> c;
    cout << 0 << " " << 0 << endl;
    cout << s << endl;
    return 0;
}