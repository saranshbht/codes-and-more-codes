#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] >= arr[i - 1])
                count++;
            else {
                sum += 1ll * count * (count + 1) / 2;
                count = 1;
            }
        }
        sum += 1ll * count * (count + 1) / 2;
        cout << sum << endl;
    }

    return 0;
}