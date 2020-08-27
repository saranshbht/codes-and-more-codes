#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n], brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            s += min(arr[i], brr[i]);
        }
        cout << s << endl;
    }

    return 0;
}