#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, s, p, v;
    cin >> t;
    while (t--) {
        cin >> n;
        int maxm = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> s >> p >> v;
            maxm = max(maxm, p / (s + 1) * v);
        }
        cout << maxm << endl;
    }

    return 0;
}