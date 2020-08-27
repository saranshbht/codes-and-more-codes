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
        int arr[n], brr[n], drr[n];
        int crr[n + 1];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        for (int i = 0; i < n; i++)
            drr[i] = arr[i];
        crr[0] = arr[0];
        for (int i = 1; i < n; i++)
            crr[i] = arr[i] - arr[i - 1];
        crr[n] = 0;
        for (int i = 0; i < n; i++) {
            int minm = min(n, i + arr[i] + 1);
            crr[minm] -= 1;
            crr[max(0, i - arr[i])] += 1;
        }

        arr[0] = crr[0];
        for (int i = 1; i < n; i++)
            arr[i] = arr[i - 1] + crr[i];
        for (int i = 0; i < n; i++)
            arr[i] -= drr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        int i;
        for (i = 0; i < n; i++)
            if (arr[i] != brr[i])
                break;
        if (i != n)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}