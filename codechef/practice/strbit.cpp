#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        char str[n];
        for (int i = 0; i < n; i++)
            cin >> str[i];
        int mark[n + 1] = {0};
        int currentflips = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            currentflips += mark[i];
            if ((str[i] == 'R' && (currentflips & 1) == 0) || (str[i] == 'G' && (currentflips & 1))) {
                res++;
                mark[i + 1]++;
                if (i + k < n)
                    mark[i + k]--;
            }
        }
        cout << res << endl;
    }

    return 0;
}