#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, q, k;
    cin >> t;
    while (t--) {
        cin >> n >> q;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        while (q--) {
            cin >> k;
            int ans = arr + n - lower_bound(arr, arr + n, k);
            int left = 0, right = n - ans - 1;
            for (; right > left; right--) {
                left += k - arr[right];
                if (left >= right)
                    break;
            }
            cout << n - right - 1 << endl;
        }
    }

    return 0;
}