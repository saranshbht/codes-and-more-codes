#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll sum = 0;
        for (int i = k; i <= n - 1 - k; i++) {
            sum += arr[i];
        }
        cout << setprecision(20);
        cout << (double)sum / (n - 2 * k) << endl;
    }

    return 0;
}