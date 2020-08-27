#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, x, k;
    cin >> t;
    while (t--) {
        cin >> x >> k;
        if ((k >= 30) || (x < (1 << k))) {
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        for (int i = 2; i * i <= x; i++) {
            while (x % i == 0) {
                cnt++;
                x /= i;
            }
        }
        if (x >= 2)
            cnt++;
        // cout << cnt << endl;
        if (cnt < k)
            cout << 0;
        else
            cout << 1;
        cout << endl;
    }

    return 0;
}