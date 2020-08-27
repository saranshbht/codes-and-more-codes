#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, a, b;
    cin >> t;
    while (t--) {
        cin >> n;
        int type[n];
        int arr[n], brr[n];
        for (int i = 0; i < n; i++) {
            cin >> type[i] >> arr[i] >> brr[i];
        }

        int i = -1;
        while (++i < n && type[i] == 2 && arr[i] != brr[i]) {
            cout << "NO" << endl;
        }
        int maxm;
        for (; i < n; i++) {
            if (type[i] == 1 || arr[i] == brr[i]) {
                cout << "YES" << endl;
            }
            else {
                if (arr[i] >= maxm && brr[i] >= maxm) {
                    cout << "NO" << endl;
                    while (++i < n && type[i] == 2 && arr[i] != brr[i]) {
                        cout << "NO" << endl;
                    }
                    i--;
                }
                else
                    cout << "YES" << endl;

            }
            maxm = max(arr[i], brr[i]);
        }
    }

    return 0;
}