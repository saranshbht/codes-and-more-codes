#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, s;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 1) {
            cout << arr[0] << endl;
            continue;
        }
        int minm = arr[0];
        int lasti = 0;
        long long total = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < minm) {
                total += 1ll * minm * (i - lasti);
                minm = arr[i];
                lasti = i;
            }
            // cout << minm;
        }
        total += 1ll * minm * (n - lasti);
        cout << total << endl;
    }

    return 0;
}